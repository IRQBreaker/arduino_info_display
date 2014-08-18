/*
   A set of custom made large numbers for a 16x2 LCD using the
   LiquidCrystal librabry. Works with displays compatible with the
   Hitachi HD44780 driver.

   The Cuicuit:
   LCD RS pin to D12
   LCD Enable pin to D11
   LCD D4 pin to D5
   LCD D5 pin to D4
   LCD D6 pin to D3
   LCD D7 pin to D2
   LCD Vee tied to a pot to control brightness
   LCD Vss and R/W tied to ground
   LCD Vcc to +5V
   LCD pin 15 tied to pushbutton for control of backlight

   Made by Michael Pilcher
   2/9/2010
   */

// include the library
#include <LiquidCrystal.h>

// initialize the interface pins
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);   // initialize the library with the numbers of the interface pins
int x = 0;

// the 8 arrays that form each segment of the custom numbers
byte LT[8] =
{
  B00111,
  B01111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte UB[8] =
{
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte RT[8] =
{
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte LL[8] =
{
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B01111,
  B00111
};
byte LB[8] =
{
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111
};
byte LR[8] =
{
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11110,
  B11100
};
byte UMB[8] =
{
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111
};
byte LMB[8] =
{
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111
};



void setup()
{
  // assignes each segment a write number
  lcd.createChar(0,LT);
  lcd.createChar(1,UB);
  lcd.createChar(2,RT);
  lcd.createChar(3,LL);
  lcd.createChar(4,LB);
  lcd.createChar(5,LR);
  lcd.createChar(6,UMB);
  lcd.createChar(7,LMB);

  // sets the LCD's rows and colums:
  lcd.begin(16, 2);

}

void custom0O()
{ // uses segments to build the number 0
  lcd.setCursor(x, 0);
  lcd.write((uint8_t)0);
  lcd.write(1);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
}

void custom1()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(2);
  lcd.setCursor(x+1,1);
  lcd.write(5);
}

void custom2()
{
  lcd.setCursor(x,0);
  lcd.write(6);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(3);
  lcd.write(7);
  lcd.write(7);
}

void custom3()
{
  lcd.setCursor(x,0);
  lcd.write(6);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(7);
  lcd.write(7);
  lcd.write(5);
}

void custom4()
{
  lcd.setCursor(x,0);
  lcd.write(3);
  lcd.write(4);
  lcd.write(2);
  lcd.setCursor(x+2, 1);
  lcd.write(5);
}

void custom5()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(6);
  lcd.write(6);
  lcd.setCursor(x, 1);
  lcd.write(7);
  lcd.write(7);
  lcd.write(5);
}

void custom6()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(6);
  lcd.write(6);
  lcd.setCursor(x, 1);
  lcd.write(3);
  lcd.write(7);
  lcd.write(5);
}

void custom7()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(1);
  lcd.write(2);
  lcd.setCursor(x+1, 1);
  lcd.write((uint8_t)0);
}

void custom8()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(3);
  lcd.write(7);
  lcd.write(5);
}

void custom9()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x+2, 1);
  lcd.write(5);
}

void customA()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(255);
}

void customB()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(6);
  lcd.write(5);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(7);
  lcd.write(2);
}

void customC()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(1);
  lcd.write(1);
  lcd.setCursor(x,1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(4);
}

void customD()
{
  lcd.setCursor(x, 0);
  lcd.write(255);
  lcd.write(1);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(4);
  lcd.write(5);
}

void customE()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(6);
  lcd.write(6);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(7);
  lcd.write(7);
}

void customF()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(6);
  lcd.write(6);
  lcd.setCursor(x, 1);
  lcd.write(255);
}

void customG()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(1);
  lcd.write(1);
  lcd.setCursor(x,1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(2);
}

void customH()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(4);
  lcd.write(255);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(255);
}

void customI()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(255);
  lcd.write(1);
  lcd.setCursor(x,1);
  lcd.write(4);
  lcd.write(255);
  lcd.write(4);
}

void customJ()
{
  lcd.setCursor(x+2,0);
  lcd.write(255);
  lcd.setCursor(x,1);
  lcd.write(4);
  lcd.write(4);
  lcd.write(5);
}

void customK()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(4);
  lcd.write(5);
  lcd.setCursor(x,1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(2);
}

void customL()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.setCursor(x,1);
  lcd.write(255);
  lcd.write(4);
  lcd.write(4);
}

void customM()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(3);
  lcd.write(5);
  lcd.write(2);
  lcd.setCursor(x,1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(254);
  lcd.write(255);
}

void customN()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(2);
  lcd.write(254);
  lcd.write(255);
  lcd.setCursor(x,1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(3);
  lcd.write(5);
}

void customP()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(255);
}

void customQ()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(1);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(255);
  lcd.write(4);
}

void customR()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x,1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(2);
}

void customS()
{
  lcd.setCursor(x,0);
  lcd.write((uint8_t)0);
  lcd.write(6);
  lcd.write(6);
  lcd.setCursor(x, 1);
  lcd.write(7);
  lcd.write(7);
  lcd.write(5);
}

void customT()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(255);
  lcd.write(1);
  lcd.setCursor(x,1);
  lcd.write(254);
  lcd.write(255);
}

void customU()
{
  lcd.setCursor(x, 0);
  lcd.write(255);
  lcd.write(254);
  lcd.write(255);
  lcd.setCursor(x, 1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
}

void customV()
{
  lcd.setCursor(x, 0);
  lcd.write(3);
  lcd.write(254);
  lcd.write(254);
  lcd.write(5);
  lcd.setCursor(x+1, 1);
  lcd.write(2);
  lcd.write((uint8_t)0);
}

void customW()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(254);
  lcd.write(254);
  lcd.write(255);
  lcd.setCursor(x,1);
  lcd.write(3);
  lcd.write((uint8_t)0);
  lcd.write(2);
  lcd.write(5);
}

void customX()
{
  lcd.setCursor(x,0);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.setCursor(x,1);
  lcd.write((uint8_t)0);
  lcd.write(254);
  lcd.write(2);
}

void customY()
{
  lcd.setCursor(x,0);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.setCursor(x+1,1);
  lcd.write(255);
}

void customZ()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(6);
  lcd.write(5);
  lcd.setCursor(x, 1);
  lcd.write((uint8_t)0);
  lcd.write(7);
  lcd.write(4);
}

void customqm()
{
  lcd.setCursor(x,0);
  lcd.write(1);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(254);
  lcd.write(7);
}

void customsm()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.setCursor(x, 1);
  lcd.write(7);
}

void letters1()
{
  customA();
  x = x + 4;
  customB();
  x = x + 4;
  customC();
  x = x + 4;
  customD();
  x = x + 4;
  customE();
  x = x + 4;
  customF();
  x = x + 4;
  customG();
  x = x + 4;
  customH();
  x = x + 4;
  customI();
  x = x + 4;
  customJ();
  delay(500);
}

void letters2()
{
  customK();
  x = x + 4;
  customL();
  x = x + 4;
  customM();
  x = x + 5;
  customN();
  x = x + 5;
  custom0O();
  x = x + 4;
  customP();
  x = x + 4;
  customQ();
  x = x + 5;
  customR();
  x = x + 4;
  customS();
  delay(500);
}

void letters3()
{
  customT();
  x = x + 4;
  customU();
  x = x + 4;
  customV();
  x = x + 5;
  customW();
  x = x + 5;
  customX();
  x = x + 4;
  customY();
  x = x + 4;
  customZ();
  x = x + 4;
  customqm();
  x = x + 4;
  customsm();
  delay(500);
}

void numbers()
{
  custom0O();    // displays custom 0 on the LCD
  x = x + 4;    // sifts cursor over 4 columns
  custom1();
  x = x + 4;
  custom2();
  x = x + 4;
  custom3();
  x = x + 4;
  custom4();
  x = x + 4;
  custom5();
  x = x + 4;
  custom6();
  x = x + 4;
  custom7();
  x = x + 4;
  custom8();
  x = x + 4;
  custom9();
  delay(500);
}



void loop()
{
  letters1();
  for (int positionCounter = 0; positionCounter < 24; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  x = 0;
  lcd.clear();
  delay(500);
  letters2();
  for (int positionCounter = 0; positionCounter < 23; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  x = 0;
  lcd.clear();
  delay(500);
  letters3();
  for (int positionCounter = 0; positionCounter < 23; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  x = 0;
  lcd.clear();
  delay(500);
  numbers();
  for (int positionCounter = 0; positionCounter < 24; positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  x = 0;
  lcd.clear();
  delay(500);
}


//// include the library code:
//#include <LiquidCrystal.h>
//#include <dht11.h>  //Import needed libraries
//
//LiquidCrystal lcd(8, 9, 4, 5, 6, 7);   // initialize the library with the numbers of the interface pins
//
//dht11 DHT11;  //Declare objects
//#define DHT11PIN 2  //Declare Pin Numbers
//
//#define LEN 16
//char string[LEN] = { 0 };
//int oldtemp = 0;
//int oldhum = 0;
//bool showTemp = true;
//char cls[LEN] = { 0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};
//
//#define UPDATE 50
//unsigned int updateCounter = 0;
//
//int val = 0;
//int val2 = 0;
//int buttonState = 0;
//
//
//void setup()
//{
//  Serial.begin(9600);
//  Serial.println("Test av temp");
//  lcd.begin(16, 2);                      // set up the LCD's number of columns and rows
//  lcd.clear();                           // Clear LCD
//  lcd.setCursor(0,0);                    // Set cursor to x=0 and y=0
//  lcd.print("Temperatur");           // Print text on LCD
//  lcd.setCursor(0,1);
//  lcd.print("Peter Karlsson");
//  delay(3000);
//
//  buttonState = analogRead(0);
//}
//
//void loop()
//{
//  delay(10);
//  val = analogRead(0);
//  delay(10);
//  val2 = analogRead(0);
//
//  if( val == val2 )
//  {
//    if( val != buttonState )
//    {
//      if( val < 800 )
//      {
//        if( showTemp == false )
//        {
//          showTemp = true;
//          displayinfo();
//        }
//        else
//        {
//          showTemp = false;
//          displayinfo();
//        }
//      }
//    }
//    buttonState = val;
//  }
//
//  updateCounter++;
//
//  if( updateCounter >= UPDATE )
//  {
//    displayinfo();
//    updateCounter = 0;
//  }
//}
//
//void displayinfo()
//{
//  if( showTemp )
//  {
//    int chk = DHT11.read(DHT11PIN);
//
//    if( chk != 0 )
//    {
//      return;
//    }
//
//    if( oldtemp != DHT11.temperature || oldhum != DHT11.humidity )
//    {
//      lcd.setCursor(0,0);
//      lcd.print(cls);
//      snprintf(string, LEN, "Temp: %dC", DHT11.temperature); 
//      lcd.setCursor(0,0);
//      lcd.print(string);
//
//      lcd.setCursor(0,1);
//      lcd.print(cls);
//      snprintf(string, LEN, "Fukt: %d%%", DHT11.humidity); 
//      lcd.setCursor(0,1);
//      lcd.print(string);
//    }
//
//    oldtemp = DHT11.temperature;
//    oldhum = DHT11.humidity;
//  }
//  else
//  {
//    lcd.setCursor(0,0);
//    lcd.print(cls);
//    lcd.setCursor(0,0);
//    lcd.print("CPU Load: 00%");
//    lcd.setCursor(0,1);
//    lcd.print(cls);
//    lcd.setCursor(0,1);
//    lcd.print("CPU Temp: 00C");
//  }
//}
//
//// dewPoint function NOAA
//// reference: http://wahiduddin.net/calc/density_algorithms.htm 
//double dewPoint(double celsius, double humidity)
//{
//  double A0= 373.15/(273.15 + celsius);
//  double SUM = -7.90298 * (A0-1);
//  SUM += 5.02808 * log10(A0);
//  SUM += -1.3816e-7 * (pow(10, (11.344*(1-1/A0)))-1) ;
//  SUM += 8.1328e-3 * (pow(10,(-3.49149*(A0-1)))-1) ;
//  SUM += log10(1013.246);
//  double VP = pow(10, SUM-3) * humidity;
//  double T = log(VP/0.61078);   // temp var
//  return (241.88 * T) / (17.558-T);
//}
//
////Serial.print("Read sensor: ");
////switch (chk)
////{
////  case 0: Serial.println("OK"); break;
////  case -1: Serial.println("Checksum error"); break;
////  case -2: Serial.println("Time out error"); break;
////  default: Serial.println("Unknown error"); break;
////}
//
////Serial.print("Humidity   (%): ");
////Serial.println((float)DHT11.humidity, 2);
//
////Serial.print("Temperature (oC): ");
////Serial.println((float)DHT11.temperature, 2);
//
////Serial.print("Dew Point (oC): ");
////Serial.println(dewPoint(DHT11.temperature, DHT11.humidity));
//
//
///*
//void loop() { 
// int x;
// x = analogRead (0);                  // Read the analog value for buttons
// if (x < 100) {                       // Right button is pressed
// lcd.setCursor(0,1);
// lcd.print ("Right "); 
// }
// else if (x < 200) {                  // Up button is pressed
// lcd.setCursor(0,1);
// lcd.print ("Up    ");
// }
// else if (x < 400){                   // Down button is pressed
// lcd.setCursor(0,1);
// lcd.print ("Down  "); 
// }
// else if (x < 600){                   // Left button is pressed
// lcd.setCursor(0,1);
// lcd.print ("Left  ");
// }
// else if (x < 800){                   // Select button is pressed
// lcd.setCursor(0,1);
// lcd.print ("Select"); }
// }
// */




























//
//#ifdef BIGCHARS
////************************************************************************
////*      A set of custom made large numbers for a 16x2 LCD using the
////*      LiquidCrystal librabry. Works with displays compatible with the
////*      Hitachi HD44780 driver.
////*
////*      orginal developed  by Michael Pilcher  2/9/2010
////*      there are 8 entries, 8 bytes per entry
////*      these are the building blocks to make the numbers
////*
////*      http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1265696343
////************************************************************************
//
//
////*      The LL, LT, UB, ect... are rust abreviations to help me designate which segment was which when referencing the large '0'.
////*      LT= left top
////*      UB= upper bar
////*      RT= right top
////*      LL= lower left
////*      LB= lower bar
////*      LR= lower right
////*      UMB= upper middle bars(upper middle section of the '8')
////*      LMB= lower middle bars(lower middle section of the '8')
//
//uint8_t      gBigFontShapeTable[] PROGMEM      =      {
//  //*      LT[8] =
//  B00111,
//  B01111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  //*      UB[8] =
//  B11111,
//  B11111,
//  B11111,
//  B00000,
//  B00000,
//  B00000,
//  B00000,
//  B00000,
//  //*      RT[8] =
//  B11100,
//  B11110,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  //*      LL[8] =
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B01111,
//  B00111,
//  //*      LB[8] =
//  B00000,
//  B00000,
//  B00000,
//  B00000,
//  B00000,
//  B11111,
//  B11111,
//  B11111,
//  //*      LR[8] =
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11111,
//  B11110,
//  B11100,
//  //*      UMB[8] =
//  B11111,
//  B11111,
//  B11111,
//  B00000,
//  B00000,
//  B00000,
//  B11111,
//  B11111,
//  //*      LMB[8] =
//  B11111,
//  B00000,
//  B00000,
//  B00000,
//  B00000,
//  B11111,
//  B11111,
//  B11111
//
//
//};
//
//
////************************************************************************
////*      6 numbers for each character
////*      9 means BLANK
//uint8_t      gBigFontAsciiTable[] PROGMEM      =      {
//
//  32,      32,      32,      32,      32,      32,            //      0x20      space
//  32,      0,      32,      32,      4,      32,            //      0x21      !
//  32,      32,      32,      32,      32,      32,            //      0x22
//  32,      32,      32,      32,      32,      32,            //      0x23
//  32,      32,      32,      32,      32,      32,            //      0x24
//  32,      32,      32,      32,      32,      32,            //      0x25
//  32,      32,      32,      32,      32,      32,            //      0x26
//  32,      32,      32,      32,      32,      32,            //      0x27
//  32,      32,      32,      32,      32,      32,            //      0x28
//  32,      32,      32,      32,      32,      32,            //      0x29
//  32,      32,      32,      32,      32,      32,            //      0x2A
//  32,      32,      32,      32,      32,      32,            //      0x2B
//  32,      32,      32,      32,      32,      32,            //      0x2C
//  32,      32,      32,      32,      32,      32,            //      0x2D
//  32,      32,      32,      32,      4,      32,            //      0x2E      . (period)
//  32,      32,      32,      32,      32,      32,            //      0x2F
//
//
//  0,      1,      2,      3,      4,      5,            //      0x30      0
//  1,      2,      32,      32,      5,      32,            //      0x31      1
//  6,      6,      2,      3,      7,      7,            //      0x32      2
//  6,      6,      2,      7,      7,      5,            //      0x33      3
//  3,      4,      2,      32,      32,      5,            //      0x34      4
//  255,6,      6,      7,      7,      5,            //      0x35      5
//  //      0,      6,      6,      7,      7,      5,            //      0x35      5
//  0,      6,      6,      3,      7,      5,            //      0x36      6
//  1,      1,      2,      32,      0,      32,            //      0x37      7
//  0,      6,      2,      3,      7,      5,            //      0x38      8
//  0,      6,      2,      32,      32,      5,            //      0x39      9
//  32,      32,      32,      32,      32,      32,            //      0x3A
//  32,      32,      32,      32,      32,      32,            //      0x3B
//  32,      32,      32,      32,      32,      32,            //      0x3C
//  32,      32,      32,      32,      32,      32,            //      0x3D
//  32,      32,      32,      32,      32,      32,            //      0x3E
//  1,      6,      2,      254,7,      32,            //      0x3F      ?
//
//  32,      32,      32,      32,      32,      32,            //      0x40      @
//  0,      6,      2,      255,254,255,      //      0x41      A
//  255,6,      5,      255,7,      2,            //      0x42      B
//  0,      1,      1,      3,      4,      4,            //      0x43      C
//  255,1,      2,      255,4,      5,            //      0x44      D
//  255,6,      6,      255,7,      7,            //      0x45      E
//  255,6,      6,      255,32,      32,            //      0x46      F
//
//  0,      1,      1,      3,      4,      2,            //      0x47      G
//  255,4,      255,255,254,255,      //      0x48      H
//  1,      255,1,      4,      255,4,            //      0x49      I
//  32,      32,      255,4,      4,      5,            //      0x4A      J
//  255,4,      5,      255,254,2,            //      0x4B      K
//  255,32,      32,      255,4,      4,            //      0x4C      L
//  32,      32,      32,      32,      32,      32,            //      0x4D      M      place holder
//  32,      32,      32,      32,      32,      32,            //      0x4E      N      place holder
//  0,      1,      2,      3,      4,      5,            //      0x4F      O      (same as zero)
//
//  0,      6,      2,      3,      32,      32,            //      0x50      P
//  32,      32,      32,      32,      32,      32,            //      0x51      Q
//  0,      6,      5,      3,      32,      2,            //      0x52      R
//  0,      6,      6,      7,      7,      5,            //      0x35      S      (same as 5)
//  1,      2,      1,      32,      5,      32,            //      0x54      T
//  2,      32,      2,      3,      4,      5,            //      0x55      U
//  32,      32,      32,      32,      32,      32,            //      0x56      V      place holder
//  32,      32,      32,      32,      32,      32,            //      0x57      W      place holder
//  3,      4,      5,      0,      32,      2,            //      0x58      X
//  3,      4,      5,      32,      5,      32,            //      0x59      Y
//  1,      6,      5,      0,      7,      4,            //      0x5A      Z
//  0
//
//};
//
////*      we have a seperate table for the wide routines
//uint8_t      gBigFontAsciiTableWide[] PROGMEM      =      {
//  //*      this table is 10 bytes, 2 rows of 5
//  //      ---top------------|
//  0,      1,      3,      1,      2,      3,      32,      32,      32,      5,            //      0x4D      M            5-wide
//  0,      3,      32,      2,      32,      3,      32,      2,      5,      32,            //      0x4E      N            4-wide
//  0,      1,      2,      32,      32,      3,      4,      3,      4,      32,            //      0x51      Q            4-wide
//  3,      32,      32,      5,      32,      32,      3,      5,      32,      32,            //      0x56      V            4-wide
//  0,      32,      32,      32,      2,      3,      4,      0,      4,      5,            //      0x57      W            5-wide
//  0
//};
//
//
////************************************************************************
//static void      BigNumber_SendCustomChars(void)
//{
//  uint8_t      customCharDef[10];
//  uint8_t      ii;
//  int            jj;
//
//  for (ii=0; ii<8; ii++)
//  {
//    for (jj=0; jj<8; jj++)
//    {
//      customCharDef[jj]      =      pgm_read_byte_near(gBigFontShapeTable + (ii * 8) + jj);
//    }
//    gLCD.createChar(ii, customCharDef);
//  }
//}
//
////************************************************************************
////*      returns the width of the character
//static int      DrawBigChar(int xLocation, int yLocation, char theChar)
//{
//  int            offset;
//  int            ii;
//  char      theByte;
//  boolean      specialCase;
//  int            specialIndex;
//  int            charWidth;
//
//  if (theChar == 0x20)
//  {
//    return(2);
//  }
//  else if (theChar < 0x20)
//  {
//    return(0);
//  }
//
//  if (theChar >= 'A')
//  {
//    theChar      =      theChar & 0x5F;      //*      force to upper case
//  }
//  specialCase      =      true;
//  switch (theChar)
//  {
//    case 'M':      charWidth      =      5;      specialIndex      =      0;      break;
//    case 'N':      charWidth      =      4;      specialIndex      =      1;      break;
//    case 'Q':      charWidth      =      4;      specialIndex      =      2;      break;
//    case 'V':      charWidth      =      4;      specialIndex      =      3;      break;
//    case 'W':      charWidth      =      5;      specialIndex      =      4;      break;
//
//
//    default:
//                   charWidth      =      3;
//                   specialCase      =      false;
//                   offset            =      6 * (theChar - 0x20);
//                   gLCD.setCursor(xLocation, yLocation);
//                   for (ii=0; ii<3; ii++)
//                   {
//                     theByte      =      pgm_read_byte_near(gBigFontAsciiTable + offset + ii);
//                     gLCD.write(theByte);
//                   }
//
//                   gLCD.setCursor(xLocation, yLocation + 1);
//                   offset      +=      3;
//                   for (ii=0; ii<3; ii++)
//                   {
//                     theByte      =      pgm_read_byte_near(gBigFontAsciiTable + offset + ii);
//                     gLCD.write(theByte);
//                   }
//                   break;
//  }
//  if (specialCase)
//  {
//    //*
//    offset            =      10 * specialIndex;
//    gLCD.setCursor(xLocation, yLocation);
//    for (ii=0; ii<charWidth; ii++)
//    {
//      theByte      =      pgm_read_byte_near(gBigFontAsciiTableWide + offset + ii);
//      gLCD.write(theByte);
//    }
//
//    gLCD.setCursor(xLocation, yLocation + 1);
//    offset      +=      5;
//    for (ii=0; ii<charWidth; ii++)
//    {
//      theByte      =      pgm_read_byte_near(gBigFontAsciiTableWide + offset + ii);
//      gLCD.write(theByte);
//    }
//  }
//  return(charWidth + 1);
//}
//
////************************************************************************
//static boolean      LCD_ProcessChar(char theChar)
//{
//  boolean      echoTheChar;
//
//  //*      this is so all 4 lines get used, when a CR comes in, we will wait
//  //*      until the next char to actually do the scrolling
//  if (gNeedToScroll && (theChar != 0x0A))
//  {
//    LCD_BumpToNextLine(true);
//    gNeedToScroll      =      false;
//  }
//  echoTheChar      =      false;
//  switch(theChar)
//  {
//    case 0x07:                                    //*      Bell
//      TurnBellOn_Off(true);
//      break;
//
//    case 0x08:                                    //*      back space
//      gLCD_currentColumn--;
//      if (gLCD_currentColumn < 0)
//      {
//        gLCD_currentColumn      =      0;
//      }
//      gLCD.setCursor(gLCD_currentColumn, gLCD_currentRow);
//      echoTheChar      =      true;
//      break;
//
//    case 0x09:                                    //*      tab
//      LCD_DisplayPrintableChar(0x20);
//      while (gLCD_currentColumn % 4)
//      {
//        LCD_DisplayPrintableChar(0x20);
//      }
//      break;
//
//    case 0x0A:                                    //*      Line feed
//      echoTheChar      =      true;
//      break;
//
//    case 0x0B:                                    //*      Vertical tab (the opposite of line feed)
//      gLCD_currentRow--;
//      if (gLCD_currentRow < 0)
//      {
//        gLCD_currentRow      =      0;
//      }
//      gLCD.setCursor(gLCD_currentColumn, gLCD_currentRow);
//      break;
//
//    case 0x0C:                                    //*      form feed
//      LCD_ClearScreen();
//      echoTheChar      =      true;
//      break;
//
//    case 0x0D:                                    //*      Carriage return
//#ifdef _ENABLE_BIG_FONTS_
//      if (gCurrentFont == kFont_Large)
//      {
//        gLCD_currentColumn      =      0;
//        gLCD_currentRow            +=      2;
//        if (gLCD_currentRow >= gLCD_MaxLines)
//        {
//          LCD_ClearScreen();
//        }
//        else
//        {
//          gLCD.clearLine(2);
//          gLCD.clearLine(3);
//        }
//      }
//      else
//#endif
//      {
//        if (gLCD_ScrollEnabled && (gLCD_currentRow == (gLCD_MaxLines - 1)))
//        {
//          //*      we dont want to do the CR if we just forced a bump because of line overflow
//          if (gWrapHasOccured == false)
//          {
//            gNeedToScroll      =      true;
//          }
//        }
//        else
//        {
//          LCD_BumpToNextLine(true);
//        }
//      }
//      gWrapHasOccured      =      false;
//      echoTheChar            =      true;
//      break;
//
//    case 0x0e:                                    //*      ^N SHIFT OUT - use alternate character set
//      SetFont(kFont_Alternate);
//      break;
//
//    case 0x0f:                                    //*      ^O SHIFT IN, resume default character set
//      SetFont(kFont_Normal);
//      break;
//
//
//    case 0x1B:                                    //*      ESCAPE
//      gEscapeSequenceActive      =      true;
//      break;
//
//    default:                              // display each character to the LCD
//      if (theChar >= 0x20)
//      {
//        echoTheChar      =      true;
//        switch(gCurrentFont)
//        {
//          case kFont_Alternate:
//            LCD_DisplayPrintableChar(theChar + 0x80);
//            break;
//
//#ifdef _ENABLE_BIG_FONTS_
//          case kFont_Large:
//            if (gLCD_currentColumn >= (gLCD_MaxColumns - 2))
//            {
//              gLCD_currentColumn      =      0;
//              gLCD_currentRow            +=      2;
//              if (gLCD_currentRow >= gLCD_MaxLines)
//              {
//                gLCD_currentRow      =      0;
//                gLCD.clearLine(0);
//                gLCD.clearLine(1);
//              }
//              else
//              {
//                gLCD.clearLine(2);
//                gLCD.clearLine(3);
//              }
//            }
//            gLCD_currentColumn      +=      DrawBigChar(gLCD_currentColumn, gLCD_currentRow, theChar);
//            break;
//#endif
//
//          case kFont_Normal:
//          default:
//            LCD_DisplayPrintableChar(theChar);
//            break;
//
//        }
//      }
//      break;
//  }
//#ifdef _ENABLE_MORSE_CODE_
//  if (gEnableMorseCode)
//  {
//    SendMorseCode(theChar, gMorseCodeWPM);
//  }
//#endif
//  return(echoTheChar);
//}
//#endif
//
//
//#ifdef TIMEDISPLAY
///*
// * Messages consist of the letter T followed by ten digit time (as seconds since Jan 1 1970)
// * you can send the text on the next line using Serial Monitor to set the clock to noon Jan 1 2013
// T1357041600
// */
//
//#include <LiquidCrystal.h>
//#include <Time.h>
//
//#define TIME_HEADER  "T"   // Header tag for serial time sync message
//#define TIME_REQUEST  7    // ASCII bell character requests a time sync message
//
//LiquidCrystal lcd(8, 9, 4, 5, 6, 7);   // initialize the library with the numbers of the interface pins
//
//#define COLUMNS 16
//#define ROWS 2
//
//char dateString[COLUMNS] = {0};
//char timeString[COLUMNS] = {0};
//char cls[COLUMNS] = { 0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20 };
//
//void setup()
//{
//  setSyncProvider( requestSync);  //set function to call when sync required
//
//  Serial.begin( 9600 );
//  Serial.println( "Waiting for sync message" );
//  Serial.write( '1' );
//
//  lcd.begin( COLUMNS, ROWS );
//  lcd.clear();
//  lcd.setCursor( 0, 0 );
//  lcd.print( "Waiting for sync" );
//}
//
//void loop()
//{
//  if( Serial.available() )
//  {
//    processSyncMessage();
//  }
//  if( timeStatus() != timeNotSet )
//  {
//    digitalClockDisplay();
//  }
//
//  delay( 1000 );
//}
//
//void digitalClockDisplay()
//{
//  snprintf( dateString, COLUMNS, "%04d-%02d-%02d", year(), month(), day() );
//  snprintf( timeString, COLUMNS, "%02d:%02d:%02d", hour(), minute(), second() );
//  lcd.setCursor( 3, 0 );
//  lcd.print( dateString) ;
//  lcd.setCursor( 4, 1 );
//  lcd.print( timeString );
//}
//
//void processSyncMessage()
//{
//  unsigned long pctime;
//  const unsigned long DEFAULT_TIME = 1357041600; // Jan 1 2013
//
//  if( Serial.find( TIME_HEADER ) )
//  {
//    pctime = Serial.parseInt();
//    if( pctime >= DEFAULT_TIME ) // check the integer is a valid time (greater than Jan 1 2013)
//    {
//      setTime( pctime ); // Sync Arduino clock to the time received on the serial port
//      lcd.setCursor( 0, 0 );
//      lcd.print( cls );
//      lcd.setCursor( 0, 1 );
//      lcd.print( cls );
//    }
//  }
//}
//
//time_t requestSync()
//{
//  Serial.write( TIME_REQUEST );
//  return 0; // the time will be sent later in response to serial mesg
//}
//#endif
//

