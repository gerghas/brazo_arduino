
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);



}

// the loop function runs over and over again forever
void loop() {
  
  //MOVIMENTOS SIMPLES
  
  digitalWrite(13, HIGH);   // giro 
  delay(1000);              // 
  digitalWrite(13, LOW);    // 
  delay(1000);//
  
  digitalWrite(12, HIGH);   // giro
  delay(1000);              // 
  digitalWrite(12, LOW);    // 
  delay(1000);
  
  digitalWrite(11, HIGH);   // hombro
  delay(1000);              // 
  digitalWrite(11, LOW);    // 
  delay(1000);
  
  digitalWrite(10, HIGH);   // hombro
  delay(1000);              // 
  digitalWrite(10, LOW);    // 
  delay(1000);


  digitalWrite(9, HIGH);   // codo
  delay(500);              // 
  digitalWrite(9, LOW);    // 
  delay(500);
  
  digitalWrite(8, HIGH);   // codo
  delay(500);              // 
  digitalWrite(8, LOW);    // 
  delay(500);

  digitalWrite(7, HIGH);   // muñeca
  delay(2000);              // 
  digitalWrite(7, LOW);    // 
  delay(2000);
  
  digitalWrite(6, HIGH);   // muñeca
  delay(1000);              // 
  digitalWrite(6, LOW);    // 
  delay(1000);

// MOVIMIENTOS DOBLES



  digitalWrite(13, HIGH);   // giro 
  digitalWrite(11, HIGH);   // hombro
  delay(1000);              // 
  digitalWrite(13, LOW);    // 
  digitalWrite(11, LOW);   // hombro
  delay(1000);//
  
  digitalWrite(12, HIGH);   // giro
  digitalWrite(10, HIGH);   // hombro
  delay(1000);              // 
  digitalWrite(12, LOW);    //
  digitalWrite(10, LOW);   // hombro 
  delay(1000);

  
}




  
