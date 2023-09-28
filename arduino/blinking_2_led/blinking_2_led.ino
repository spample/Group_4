int red_led = 13;
int yellow_led = 12;



void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(red_led, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(50);                      // wait for half second
  digitalWrite(red_led, LOW);   // turn the LED off by making the voltage LOW
  delay(50);                      // wait for half second

  digitalWrite(yellow_led, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(50);                      // wait for half second
  digitalWrite(yellow_led, LOW);   // turn the LED off by making the voltage LOW
  delay(50);                      // wait for half second
                  // wait for a second
}