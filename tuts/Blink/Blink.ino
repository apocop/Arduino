
/* A blink program which blinks to the main rythmn of Beethoven's 
 * Symphony No. 7, II Allegretto. 𝄆♩♪♪𝄀♩♩𝄇. BPM = 75.
 */
 
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  }

 
void quarter(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(720);
  digitalWrite(LED_BUILTIN, LOW);
  delay(80);
}

void eight(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(360);
  digitalWrite(LED_BUILTIN, LOW);
  delay(40);
}

void loop() {
  quarter();
  eight();
  eight();
  quarter();
  quarter();                  
}
