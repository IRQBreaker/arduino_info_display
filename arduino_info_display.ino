/*
 * Messages consist of the letter T followed by ten digit time (as seconds since Jan 1 1970)
 * you can send the text on the next line using Serial Monitor to set the clock to noon Jan 1 2013
 T1357041600
 */

#include <LiquidCrystal.h>
#include <Time.h>

#define TIME_HEADER  "T"   // Header tag for serial time sync message
#define TIME_REQUEST  7    // ASCII bell character requests a time sync message

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);   // initialize the library with the numbers of the interface pins

#define COLUMNS 16
#define ROWS 2

char dateString[COLUMNS] = {0};
char timeString[COLUMNS] = {0};
char cls[COLUMNS] = { 0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20 };

void setup()
{
  setSyncProvider( requestSync);  //set function to call when sync required

  Serial.begin( 9600 );
  Serial.println( "Waiting for sync message" );
  Serial.write( '1' );

  lcd.begin( COLUMNS, ROWS );
  lcd.clear();
  lcd.setCursor( 0, 0 );
  lcd.print( "Waiting for sync" );
}

void loop()
{
  if( Serial.available() )
  {
    processSyncMessage();
  }
  if( timeStatus() != timeNotSet )
  {
    digitalClockDisplay();
  }

  delay( 1000 );
}

void digitalClockDisplay()
{
  snprintf( dateString, COLUMNS, "%04d-%02d-%02d", year(), month(), day() );
  snprintf( timeString, COLUMNS, "%02d:%02d:%02d", hour(), minute(), second() );
  lcd.setCursor( 3, 0 );
  lcd.print( dateString) ;
  lcd.setCursor( 4, 1 );
  lcd.print( timeString );
}

void processSyncMessage()
{
  unsigned long pctime;
  const unsigned long DEFAULT_TIME = 1357041600; // Jan 1 2013

  if( Serial.find( TIME_HEADER ) )
  {
    pctime = Serial.parseInt();
    if( pctime >= DEFAULT_TIME ) // check the integer is a valid time (greater than Jan 1 2013)
    {
      setTime( pctime ); // Sync Arduino clock to the time received on the serial port
      lcd.setCursor( 0, 0 );
      lcd.print( cls );
      lcd.setCursor( 0, 1 );
      lcd.print( cls );
    }
  }
}

time_t requestSync()
{
  Serial.write( TIME_REQUEST );
  return 0; // the time will be sent later in response to serial mesg
}

