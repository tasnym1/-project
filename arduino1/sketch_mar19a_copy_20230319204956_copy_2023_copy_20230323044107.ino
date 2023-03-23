const int led[8]={5,6,7,8,9,10,11,12};


void setup() {
  for (int i=0;i<8;i++){
    pinMode (led[i],OUTPUT);
  }
pinMode(3,INPUT);
pinMode(4,INPUT);
}

void loop() {
  //flashing
  for (int i=0 ;i<8;i++){
    digitalWrite(led[i],HIGH);
  }
   delay(150);
   for (int i=0 ;i<8;i++){
    digitalWrite(led[i],LOW);
  }
    delay(150);
    //shifting
   for (int i=0 ;i<8;i++){
    digitalWrite(led[i],HIGH);
    delay(150);
    digitalWrite(led[i],LOW);
    delay(150);
   }
   for (int i=0 ;i<8;i++){
    digitalWrite(led[7-i],HIGH);
    delay(150);
    digitalWrite(led[7-i],LOW);
    delay(150);
   }
   
    //coverging
    for (int i=0 ;i<8;i++){
    digitalWrite(led[i],HIGH);
    digitalWrite(led[7-i],HIGH);
    delay(150);
    }   
    // diverging
     for (int i=0 ;i<8;i++){
     digitalWrite(led[i],LOW);
    digitalWrite(led[7-i],LOW);
    delay(150);
    }
    //ping pong 
    for (int i=0 ;i<8;i++){
    digitalWrite(led[i],HIGH);
    delay(100);
    digitalWrite(led[i],LOW);
    delay(100);
   }
   for (int i=0 ;i<8;i++){
    digitalWrite(led[7-i],HIGH);
    delay(100);
    digitalWrite(led[7-i],LOW);
    delay(100);
   }
    //snake
    for (int i=0 ;i<8;i++){
    digitalWrite(led[i],HIGH);
    delay(150);
   }
    for (int i=0 ;i<8;i++){
    digitalWrite(led[7-i],LOW);
    delay(150);
    }
    

}
