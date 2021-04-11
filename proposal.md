# Proposal

## What will (likely) be the title of your project?

Arduino-based Temperature ramp model for DNA Origami Folder

## In just a sentence or two, summarize your project. (E.g., "A website that lets you buy and sell stocks.")

A chunk of code to contribute to my team's senior design project - an Origami folder for DNA Origami applications. The code would describe the moth model needed to add heat to the natural cooling curve of water, in order to decrease the water from a specific temperature, at a specific rate. 

## In a paragraph or more, detail your project. What will your software do? What features will it have? How will it be executed?

The code will be able to take a user's input of desired start temperature, end temperature, and total lime, and it will convert that into a contunuous input to be delivered to a peltier heater. There  will also be a temperature feedback loop from an accompanying temperature probe to give correction feedback throughout the duration of the ramp. The arduino will work with a motor driver to alter the speed of current through the peltier.

## If planning to combine 1051's final project with another course's final project, with which other course? And which aspect(s) of your proposed project would relate to 1051, and which aspect(s) would relate to the other course?

I am combining this project with my senior design project in the college of engineering. It will relate to my senior design project through the functionality of the origami folder. Even though it is not in python, it relates to this course's content because it will rely heavily on while, if, and for statements. It will allow me to use the foundation that we developed in this class into an actual engineering context.

## If planning to collaborate with 1 or 2 classmates for the final project, list their names, email addresses, and the names of their assigned TAs below.

none

## In the world of software, most everything takes longer to implement than you expect. And so it's not uncommon to accomplish less in a fixed amount of time than you hope.

### In a sentence (or list of features), define a GOOD outcome for your final project. I.e., what WILL you accomplish no matter what?

No matter what, the code will be able to ramp temperature from a desired start temperature to a desired final temperature, over a defined period of time.

### In a sentence (or list of features), define a BETTER outcome for your final project. I.e., what do you THINK you can accomplish before the final project's deadline?

A better outcome would incorporate a much more linear temperature ramp by relying on the math model as opposed to just the temperature feedback loop.

### In a sentence (or list of features), define a BEST outcome for your final project. I.e., what do you HOPE to accomplish before the final project's deadline?

The best outcome would include the linear ramp, and also a graph of the temperatures over the duration of the ramp. It would produce a quality report of how far the temperature deviated, and how long it took to fix it.

## In a paragraph or more, outline your next steps. What new skills will you need to acquire? What topics will you need to research? If working with one of two classmates, who will do what?

In order to complete this project, I am going to have to look more into the differences between arduino and python coding. I will have to see if there are differences in the way variables are defined, loops are called, and the code is written in general. Additionally, I will need to research the communication aspect between the arduino and the motor driver, peltier, and temperature sensor. I will need to understand how to call specific pins in arduino, and how to apply that to my variables. This will be essential in writing the code as a whole. In order to complete the math model, I will need to understand the ENA pin of the arduino, and how that affects the current and voltage being applied to the peltier. I will need to develop a relationship between the ENA pin and the steady state resultant temperature in order to complete the math model, and accurately write the output into the code, for the peltier to follow. Overall, in order to complete this project, I will need to develop the math model, familiarize myself with Arduino, and input the model into Arduino so it actually results in the temperature ramp of the peltier.
