# Proposal

## What will (likely) be the title of your project?

Arduino-based Motion Alert System

## In just a sentence or two, summarize your project. (E.g., "A website that lets you buy and sell stocks.")

A laser "trip wire" that, when the beam is broken, will send a signal to notify me that the laser had been broken. It is similar to an intruder alert system, in which when someone walks through the laser beam, the signal will be triggered to inform me of the occurance.

## In a paragraph or more, detail your project. What will your software do? What features will it have? How will it be executed?

The code will be based in Arduino, and the hardware will consist of a laser diode, a photoresistor, and some sort of signalling aspect, whether it be an LED, buzzer, or a telephone notification. The laser will be pointed at the photoresistor, and when the beam is broken, the code will trigger the notification system to occur. I will need to use a breadboard and jumper wires to connect all the electronic hardware components, and I will run the Arduino code from my laptop. Once the code is uploaded to the Arduino, it will be able to act as a stand-alone unit (contigent on the availability of a power supply). 

## If planning to combine 1051's final project with another course's final project, with which other course? And which aspect(s) of your proposed project would relate to 1051, and which aspect(s) would relate to the other course?

This project is not being combined.

## If planning to collaborate with 1 or 2 classmates for the final project, list their names, email addresses, and the names of their assigned TAs below.

none.

## In the world of software, most everything takes longer to implement than you expect. And so it's not uncommon to accomplish less in a fixed amount of time than you hope.

### In a sentence (or list of features), define a GOOD outcome for your final project. I.e., what WILL you accomplish no matter what?

No matter what, the hardware will be able to sense the breakage of the laser to the LDR. At the least, the notification aspect will include a light up LED or a print statement counting the number of times the beam was broken.

### In a sentence (or list of features), define a BETTER outcome for your final project. I.e., what do you THINK you can accomplish before the final project's deadline?

A better outcome would include a text-notification that the beam had been broken.

### In a sentence (or list of features), define a BEST outcome for your final project. I.e., what do you HOPE to accomplish before the final project's deadline?

The best case scenario would allow the user to customize the "next steps" after the notification text had been recieved. They would be able to either turn off the system, keep count, or trigger some other sort of signal such as an LED or Buzzer remotely.

## In a paragraph or more, outline your next steps. What new skills will you need to acquire? What topics will you need to research? If working with one of two classmates, who will do what?

In order to complete this project, I am going to have to look more into the differences between arduino and python coding. I will have to see if there are differences in the way variables are defined, loops are called, and the code is written in general. Additionally, I will need to research the communication aspect between the arduino and the LDR, in order to better understand how to code different aspects of the LDR readings. I will also need to look into the hardwiring of both the LDR and the laser diode, in order to successfully connect them functionally. For the best case scenario version of my project, I would need to look into how to communicate with my cellphone from Arduino. Whether the communication is by text, tweet, or some other method, I will need to look into how that is coded, and the specific nuances of said code. In general, the skills I will need to acquire include the Arduino coding in general, as well as refinement of by breadboarding skills.
