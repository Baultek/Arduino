 const int controlPinl = 2;

const int controlPin2 = 3;

const int enablePin = 9;

const int directionSwitchPin = 4;

const int onOffSwitchStateSwitchPin = 5;

const int potPin = A0;

int onOffSwitchState = 0;

int previousOnOffSwitchState = 0;

int directionSwitchState = 0;

int previousDirectionSwitchState = 0;

int motorEnabled = 0;

int motorSpeed = 0;

int motorDirection = 1;


void setup(){

  pinMode(directionSwitchPin, INPUT);

  pinMode(onOffSwitchStateSwitchPin, INPUT);

  pinMode(controlPinl, OUTPUT);

  pinMode(controlPin2, OUTPUT);

  pinMode(enablePin, OUTPUT);

  digitalWrite(enablePin, LOW);
  
}

void loop(){

  onOffSwitchState =

  digitalRead(onOffSwitchStateSwitchPin);

  delay(1);

  directionSwitchState = 

  digitalRead(directionSwitchPin);

  motorSpeed = analogRead(potPin)/4;

  if(onOffSwitchState  != previousOnOffSwitchState){

    if(onOffSwitchState == HIGH){

      motorEnabled = !motorEnabled;
    }
  }

if (directionSwitchState !=

previousDirectionSwitchState){

if (directionSwitchState == HIGH){

  motorDirection =  !motorDirection;
  }
}

if (motorDirection == 1){

  digitalWrite(controlPinl, HIGH);
  digitalWrite(controlPin2, LOW);
}

else {

  digitalWrite(controlPinl, LOW);

  digitalWrite(controlPin2, HIGH);
 
}
if (motorEnabled == 1) {

  analogWrite(enablePin, motorSpeed);
}

else {

  analogWrite(enablePin, 0);
}

previousDirectionSwitchState = 

directionSwitchState;

previousOnOffSwitchState = onOffSwitchState;
}
