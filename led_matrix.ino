int row[] = {13,12,11};
int col[] = {7,6,5};



void off()  {
  for (int i=0;i<3;i++)  {
    digitalWrite(row[i], LOW);
    digitalWrite(col[i], HIGH);
  }
}

void setup()  {
  for (int i=0;i<3;i++)  {
    pinMode(row[i], OUTPUT);
    pinMode(col[i], OUTPUT);
  } 
  off();
}


void loop()  {
  digitalWrite(row[1], HIGH);
  digitalWrite(col[0], LOW);
}
