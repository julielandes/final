# Final Python Project
# Arduino based tripwire system
# Written by Julie Landes

# Assisted largely from https://www.twilio.com/docs/sms/tutorials/how-to-send-sms-messages-python
#       for help with the Twilio logistics of sending an SMS from Python
# As well as https://problemsolvingwithpython.com/11-Python-and-External-Hardware/11.04-Reading-a-Sensor-with-Python/
#       for help with the commands to import the Serial data from Arduino into Python.
# Many commands were taken from the websites indicated above, but I oriented them and fit them into relevant
# loops to fit my needs for this project.

import serial
import time
import os
from twilio.rest import Client



def sendtext():
    account_sid ='AC18c4dbc5b48a4dca8152719777c24bbf'
    auth_token = 'e0ed3f3a3b57c0cb356913646c7e0d5e'
    client = Client(account_sid, auth_token)

    message = client.messages \
            .create(
             body='The alarm has been tripped!',
             from_='+19132706774',
             to='+12156927026'
             )
    return



ardu = serial.Serial('COM6', 9600)
count = 0
tripcount = 0

data = []
while True:
    ser = ardu.readline()
    string_n = ser.decode()
    string = string_n.rstrip()

    num = float(string)
    print(num)
    data += [num]
    count +=1

    if count == 3:
        calib = ((data[0]+data[1]+data[2])/3-100)
    elif count >3:
        if num<calib:
            sendtext()
            time.sleep(5)
            
    

            





