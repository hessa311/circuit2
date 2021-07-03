// C++ code
//
#define L1 10 
#define I9 9 
#define I8 8 

#define L2 11 
#define I12 12 
#define I13 13 

int speed1=120;
int d1=1;
int d2=0;

int speed2=120;
int d3=1;
int d4=0;

void setup()
{
  pinMode(L1, OUTPUT);
  pinMode(I9, OUTPUT);
  pinMode(I8, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(I12, OUTPUT);
  pinMode(I13, OUTPUT);
  
  
  
}

void loop()
{
  //1 
  digitalWrite(I9, d1);
  digitalWrite(I8, d2);
  analogWrite(L1,speed1);
  
  //2
   digitalWrite(I12, d3);
  digitalWrite(I13, d4);
  analogWrite(L2,speed2);
  
}