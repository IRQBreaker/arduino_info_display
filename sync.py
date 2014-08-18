import serial
import time
import calendar

connected = False

ser = serial.Serial("COM3", 9600)
ser.close()
ser.open()

while not connected:
  serin = ser.read()
  connected = True

#ser.write("1")

#while ser.read() == '1':
#  ser.read()


while True:
  string = "T" + str(calendar.timegm(time.localtime())) + "\n"
  ser.write(string)
  time.sleep(60*5)

ser.close()
