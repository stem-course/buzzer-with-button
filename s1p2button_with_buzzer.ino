/*
Code by:
M.Hashir

This is a code that turns on buzzer on pin 11 of Arduino when button is pressed

Hardware:
-Arduino
-push button
-buzzer

Connections:
-Connect longer leg of buzzer to pin 11 of Arduino
-Connect shorter leg of buzzer to GND of Arduino
-Connect one leg of button to pin A0 of Arduino
-Connect other leg of button to GND of Arduino


*/
int button = A0;                  //button is connected to pin14 which is pin A0
int buzzer = 11;                  //buzzer is connected to pin11 of Arduino

void setup() {
pinMode(buzzer,OUTPUT);           //do not edit this line
pinMode(button,INPUT_PULLUP);     //do not edit this line
}

void loop() {
int myinput = digitalRead(button);    //saves input in a variable named myinput
if(myinput==LOW){                 //if button is pressed
digitalWrite(buzzer,HIGH);        //switch on buzzer
delay(10000);
digitalWrite(buzzer,LOW);         //switch off buzzer 
}
 else                             //if button is not pressed
 {
 digitalWrite(buzzer,LOW);        //switch off buzzer
 }
}
