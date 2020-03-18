const byte ledPin = 6;
const byte LED = 7;
int val;

void setup() {
 Serial.begin(9600); 
 Serial.print("\nHello World. \n");
 Serial.println("Hello," );
 Serial.print("\tLED pin is: "); 
 Serial.print(ledPin); 
 Serial.print("\nBYE!"); 
   
}

void loop() {
    if( Serial.available() ) {
      val = Serial.read();
      if (val == '1'){
        digitalWrite(LED, HIGH);
        Serial.print("\n LED ON");
      } else if (val == '0') {
          digitalWrite(LED, LOW);
          Serial.print("\n LED OFF");
        }
      }
    }
