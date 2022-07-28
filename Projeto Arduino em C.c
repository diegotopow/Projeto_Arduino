/Algoritmo fotoresistor
#define ldr A0
#define led 2
#include <LiquidCrystal.h>

int luzVerde1 = 7;
int luzVermelho1 = 9;
int luzAmarela1 = 8;

int luzVerde2 = 13;
int luzVermelho2 = 6;
int luzAmarela2 = 10;

 
int vldr=1;
//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd( 12, 11,5, 4, 3, 2);

void setup() { 
  pinMode(ldr,INPUT); //fotoresistor
  pinMode(led, OUTPUT); //fotoresistor
  Serial.begin(9600); //fotoresistor
  pinMode(9,OUTPUT);     //define o pino 8 como saída semaforo
  pinMode(8,OUTPUT);     //define o pino 9 como saída semaforo
  pinMode(7,OUTPUT);    //define o pino 10 como saída semaforo
  pinMode(6,OUTPUT);     //define o pino 8 como saída semaforo
  pinMode(10,OUTPUT);     //define o pino 9 como saída semaforo
  pinMode(13,OUTPUT);    //define o pino 10 como saída semaforo
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2); // Display
}

  

void loop() {
  vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
      lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
      lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 

    digitalWrite(luzVermelho2, HIGH);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
 
    digitalWrite(luzVerde1, HIGH);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(3000);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(3000);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    delay(50);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    digitalWrite(luzVermelho2, LOW);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    digitalWrite(luzVerde1, LOW);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 

    digitalWrite(luzVermelho2, HIGH); 
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(1000);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 //Sinal amarelo                                    
    digitalWrite(luzAmarela1, HIGH);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    delay(50);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(1000);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(1000);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    digitalWrite(luzVermelho2, LOW);  
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
                                         
    digitalWrite(luzAmarela1, LOW);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 


    digitalWrite(luzVermelho1, HIGH); 
vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
                                         
    digitalWrite(luzVerde2, HIGH);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    delay(50);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(3000);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(3000);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    digitalWrite(luzVermelho1, LOW);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    digitalWrite(luzVerde2, LOW);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACEENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 

   digitalWrite(luzVermelho1, HIGH); 
   vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 //Sinal amarelo                                    
    digitalWrite(luzAmarela2, HIGH);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    delay(50);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(1000);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(1000);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 
    digitalWrite(luzVermelho1, LOW); 
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();
   
  }
  

  Serial.println(vldr);
 delay(100); 
                                          
    digitalWrite(luzAmarela2, LOW);
    vldr = analogRead (ldr); //loop fotoresistor
  
  if(vldr < 500){
    lcd.setCursor(0, 1);
      lcd.print("USE O CINTO");
       delay(100);
       lcd.clear();
  }
  else{
    lcd.setCursor(0, 1);
   lcd.print("ACENDA OS FAROIS");
   delay(100);
       lcd.clear();

   
  }
  

  Serial.println(vldr);
 delay(100); 
 


}