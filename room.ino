// this code is writen by Ankit sharma
// date: 11/03/2023
// this project is used to automate the home appliance we
// can controll three applances at a time
int x;
int r1=5,r2=6;
void setup(){
  Serial.begin(9600);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  digitalWrite(6,1);
  digitalWrite(5,1);
}
void loop(){
  x=Serial.parseInt();
  Serial.println(x);
  if(x==1 || x==2){
    relay_1();
  }
  else if(x==3 || x==4){
    relay_2();
  }
  else{

  }
}

void relay_1(){
  if(x==1){
    digitalWrite(5,0);
    Serial.println("I am in relay_1 if");
  }
  else{digitalWrite(5,1);
    Serial.println("I am in relay_1 else");
  }
}

void relay_2(){
  if(x==3){
    digitalWrite(6,0);
    Serial.println("I am in relay_2 if");
  }
  else{digitalWrite(6,1);
    Serial.println("I am in relay_2 else");
  }
}

