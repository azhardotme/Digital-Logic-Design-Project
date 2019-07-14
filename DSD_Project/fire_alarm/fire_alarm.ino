int LED=2;
int BUZZER=4;
int sensor=3;


void setup() {
pinMode(LED,OUTPUT);
pinMode(BUZZER,OUTPUT);
pinMode(sensor,INPUT);
Serial.begin(9600);
}
void loop() {


int val= digitalRead(3);


Serial.print("State = ");
Serial.println(val);


if(val == 0)
{
Serial.println("Danger");
digitalWrite(2,HIGH);
digitalWrite(4,HIGH);
delay(500);
}

else
{
Serial.println("It’s ok");
digitalWrite(2,LOW);
digitalWrite(4,LOW);
delay(500);
}


Serial.println("");
}
