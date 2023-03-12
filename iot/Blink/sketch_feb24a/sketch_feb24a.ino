int led1 = D3;
int led2 = D5;
int led3 = D6;

int LDR_In = A0;

int lichthoeveelheid;

void setup(){
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  }

void loop(){
  lichthoeveelheid = analogRead(LDR_In);
  
  Serial.println(lichthoeveelheid);
  

  if(lichthoeveelheid - 400 < (820-400) * 0.25 ){
   digitalWrite(led1, HIGH);
  }
  else{}
  digitalWrite(led1,LOW);

  if(lichthoeveelheid - 400 < (820-400) * 0.25 )
   digitalWrite(led2, HIGH);
  }
  else{}
  digitalWrite(led2,LOW);

  
  if(lichthoeveelheid - 400 < (820-400) * 0.25 )
  digitalWrite(led3, HIGH);
  }
  else{}
  digitalWrite(led3,LOW);


 
}
