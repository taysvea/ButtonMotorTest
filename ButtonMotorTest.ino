#include <Servo.h>

//button pin
const int buttonPin = 2;

int buttonState = 0;


//Assigns the servos
Servo servotest;


//Position rotate
int postest = 180;

//Time
long ttest = 0;


void setup() {

  servotest.attach(9);  // The number value changes the pins.



  servotest.write(postest);


  //test
  pinMode(buttonPin, INPUT);


  delay(1000);
}

void loop() {
  long now = millis();

  buttonState = digitalRead(buttonPin);
  

  //Test motor here
  if (buttonState == HIGH && now - ttest > 1000) {
    if (postest > 0) {
      postest = 0;
    }
    else {
      postest = 180;
    }
    servotest.write(postest);
    ttest = now;
  }


  }


