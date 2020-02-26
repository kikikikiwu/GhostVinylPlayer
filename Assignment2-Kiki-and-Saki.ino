int enable = 2;
int motor = 3;
int motor2 = 5;
int sp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(enable, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {
//delay(3000);
//digitalWrite(enable, HIGH);
//   analogWrite(motor, 150);
//   analogWrite(motor2, LOW);
//  
  if(Serial.available()){
    
    sp = Serial.read();
    Serial.println(sp);
    
    digitalWrite(enable, HIGH);
    analogWrite(motor, sp);
    analogWrite(motor2, LOW);

    if(sp <= 0) {
      
      digitalWrite(enable, LOW);
      
      }
   }
}
