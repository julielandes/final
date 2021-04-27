//Final Project Code
// Arduino based tripwire system
//Julie Landes

// This code was largely aided by the following resource for the circuitry help and Arduino-specific inputs for the different hardware components
//    https://create.arduino.cc/projecthub/digitalfendi/super-simple-fun-laser-tripwire-aa56c9
// I largely edited their code for the parts that I had, as well as adding the callibration metric and some of the loops. Essentailly, I took the code that they created,
// I added my own components, and added the Python communication for a notification aspect.

int laser = 2; // laser is in Digital Pin 2
int buzzer = 3; // buzzer is in Digital Pin 3
int button = 4; // button is in Digital Pin 4
int LDRtrip = A0; //photoresistor 1 is in Analog Pin A0
int LDRreg = A1; //photoresistor 2 is in Analog Pin A1
int calib = 0; //calibration value for the LDR
int calib2 = 0;
int calib3 = 0;
int finalcalib = 0; //actual callibration value
int reading = 0; //setting up the LDR reading variable
int count = 0; //counting button presses
int x;

void setup() {
  pinMode(laser, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
  pinMode(LDRtrip, INPUT);
  Serial.begin(9600);

  digitalWrite(laser, HIGH); //turn on laser for calibration
  
  while (1) {
    calib = analogRead(LDRtrip); //get three calibration readings
    //Serial.print("LDR Reading: ");
    Serial.println(calib);
    delay(100);
    calib2 = analogRead(LDRtrip);
    //Serial.print("LDR Reading: ");
    Serial.println(calib2);
    delay(100);
    calib3 = analogRead(LDRtrip);
    //Serial.print("LDR Reading: ");
    Serial.println(calib3);
    delay(100); 

    // calibrate to the laser light level 
    if ((abs(calib - calib2)) < 20) {
      finalcalib = ((calib + calib2 + calib3)/3); //avg of the three calibration values
      //Serial.print("Calibration LDR Reading: ");
      Serial.print(finalcalib);
      break;
    }
    else if ((abs(calib - calib3)) < 20){
      finalcalib = ((calib + calib2 + calib3)/3); //avg of the three calibration values
      //Serial.print("Calibration LDR Reading: ");
      Serial.print(finalcalib);
      break;
    }
    else {
      delay(2000); // if they arent close enough together, wait and try again
    }
    }
    digitalWrite(laser, LOW); //turn off laser til button is pressed

    while (1){ //until button is pressed, nothing happens
      if (digitalRead(button) == HIGH){ //if the button is pressed
        digitalWrite(laser, HIGH); //turn on laser
        break;
        }
    }
}

void loop() {
    reading = analogRead(LDRtrip);
    Serial.println(reading);
    if (reading < (finalcalib - 100)){ //if the laser is broken
      tone(3, 3000);
      delay(5000);
      //Serial.println("beam broken");
    }
    else {
      noTone(3);
    }
}


   

  
  
 
  
