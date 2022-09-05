int pinArray [] = {13,12,11,10,9,8};
int count = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  for (count=8; count<13; count++) {
    pinMode(pinArray[count], OUTPUT);
  }

}

//the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
 for (count=8; count<14; count++){
 digitalWrite(count, HIGH);   // turn the LED on (HIGH is the voltage level)
 delay(100);                        //wait for half a second
 digitalWrite(count, LOW);    // turn the LED off by making the voltage LOW
                  //wait for half a second  
 }
 for (count=13; count>=8; count--){
 digitalWrite(count, HIGH);  
 delay(100);
 digitalWrite(count,LOW);
 }

}
