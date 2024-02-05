int button = 8;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int c = 0;          
void setup() {
  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  if(digitalRead(button) == HIGH){
    c++; 
    switch(c){
      case 1 : digitalWrite(led1 , HIGH);
      break ; 
      case 2 :digitalWrite(led2 , HIGH);
      break ; 
      case 3 :digitalWrite(led3 , HIGH);
      break ; 
      default: 
      digitalWrite(led1 , LOW);
      digitalWrite(led2 , LOW);
      digitalWrite(led3 , LOW);
      c=0 ; 
      break ; 
    }
    delay(200) ; 
  }

  
}
