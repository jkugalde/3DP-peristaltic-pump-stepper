#define EN        8  
#define X_DIR     5 
#define X_STP     2

int delayTime = 50; // velocidad
unsigned long in = 0;
unsigned long K = 34000;

void step(boolean dir, byte dirPin, byte stepperPin, unsigned long steps){  
  
  digitalWrite(dirPin, dir);
  delay(100);
  for (unsigned long i = 0; i < steps; i++) {
    digitalWrite(stepperPin, HIGH);
    delayMicroseconds(delayTime); 
    digitalWrite(stepperPin, LOW);
    delayMicroseconds(delayTime); 
  }
  
}

void dispense(int ml){

unsigned long stepsml = ml*K;
step(0,X_DIR,X_STP,stepsml);
  
}

void setup(){

  Serial.begin(9600);
  pinMode(X_DIR, OUTPUT); pinMode(X_STP, OUTPUT);
  pinMode(EN, OUTPUT);
  digitalWrite(EN, LOW);
  Serial.println("ml? ");

}

void loop(){

  if(Serial.available()>0){
  in=Serial.parseInt();
  Serial.println(in);
  delay(5000);
  dispense(in);
  Serial.println("ml? ");
  }

}
