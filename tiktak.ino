/*
RED
A0 = [0,0]
A2 = [0,1]
A3 = [0,2]

7 = [1,0]
6 = [1,1]
5 = [1,2]

13 = [2,0]
12 = [2,1]
11 = [2,2]

GREEN
A4 = [0,0]
A5 = [0,1]
1 = [0,2]

4 = [1,0]
3 = [1,1]
2 = [1,2]

10 = [2,0]
9 = [2,1]
8 = [2,2]

*/
int player = 1; 
int key = 0;
int col[3] = {10,9,8};

int kayVals[9] = {295, 329, 378, 308, 341, 388, 332, 363, 407};
// the values of resistency on each key on the keypad

void setup()
{
  for (int i=1;i<14;i++)
  {
    pinMode(i, OUTPUT);
  
  } 
  pinMode(A0, OUTPUT); 
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  
  Serial.begin(9600);
  
}


void loop()
{

  key = analogRead(A1);
  Serial.println(key);
  switch (key){
    case 295:
     if (player % 2 == 0){
      digitalWrite(A0, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(A4, HIGH);
      player++;
      delay(100);
    }break;
   	case 329:
     if (player % 2 == 0){
      digitalWrite(A2, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(A5, HIGH);
      player++;
      delay(100);
    }break;
    case 378:
     if (player % 2 == 0){
      digitalWrite(A3, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(1, HIGH);
      player++;
      delay(100);
    }break;
   	case 308:
     if (player % 2 == 0){
      digitalWrite(7, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(4, HIGH);
      player++;
      delay(100);
    }break;
    case 341:
     if (player % 2 == 0){
      digitalWrite(6, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(3, HIGH);
      player++;
      delay(100);
    }break;
   	case 388:
     if (player % 2 == 0){
      digitalWrite(5, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(2, HIGH);
      player++;
      delay(100);
    }break;
    case 332:
     if (player % 2 == 0){
      digitalWrite(13, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(10, HIGH);
      player++;
      delay(100);
    }break;
   	case 363:
     if (player % 2 == 0){
      digitalWrite(12, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(9, HIGH);
      player++;
      delay(100);
    }break;
    case 407:
     if (player % 2 == 0){
      digitalWrite(11, HIGH);
      player++;
      delay(100);
    } else {
      digitalWrite(8, HIGH);
      player++;
      delay(100);
    }break;
    
    
    if (digitalRead(A0) && digitalRead(A2) && digitalRead(A3) == HIGH){
      digitalWrite(8, HIGH);
    }
   

  }
  
  

  
  
 
}

