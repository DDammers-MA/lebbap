int LDR_In = A0;
int lightHoeveelheid;

uint8_t Led1 = D3;
uint8_t Led2 = D5;
uint8_t Led3 = D6;

int hoogsteLDR = 700;
int laagsteLDR = 350;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightHoeveelheid = analogRead(LDR_In);
  Serial.println(lightHoeveelheid);

  if (lightHoeveelheid < 0.75 * hoogsteLDR){
    digitalWrite(Led1,HIGH);
  }
  else{
    digitalWrite(Led1,LOW);
  }
  
  if (lightHoeveelheid < 0.50 * hoogsteLDR){
    digitalWrite(Led2,HIGH);
  }
  else{
    digitalWrite(Led2,LOW);
  }
  
  if (lightHoeveelheid < 0.25 * hoogsteLDR){
    digitalWrite(Led3,HIGH);
  }
  else{
    digitalWrite(Led3,LOW);
  }
  delay(1000);
}
