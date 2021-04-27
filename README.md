# final
final CIS1050 project

Final Project Title:  Arduino-based Tripwire Notification System
Author:  Julie Landes
        (Senior, Bioengineering Major)

This system is a tripwire consisting of a laser diode and photoresister, as well as a buzzer and button. These parts are hardwired and coded in Arduino, such that when the code is run, the system will be "ready", and the photoresistor will calibrate to the laser diode's brightness. The laser will remain off until the button is pressed and the system is "armed". This will turn on the laser diode and activate the tripwire system. The Arduino is recieving constant serial readings from the photoresistor, that are then communicated over to python. When the laser beam is broken, the buzzer will sound and python will use the help of Twilio to send a text message notification to my cell phone. The system will wait 5 seconds, and then resume monitoring. The system will continue to run until the user shuts down the code.

Currently, the system needs to be plugged into a laptop. In the future, this project could be improved by making a stand-alone system. This could not be completed for this project because I did not have a WIFI shield for my arduino. So in order to send the text message, I had to be connected to my computer to send it through Python. This was one of the biggest problem-solving challenges that I faced, because the resources I was comparing to all suggested the only way of texting from Arduino to be through a Wifi shield. But, by reading the serial outputs into python, I was able to circumvent this issue and still send the text message. 

The code for this project is included in the repository, as well as a video demonstration!
