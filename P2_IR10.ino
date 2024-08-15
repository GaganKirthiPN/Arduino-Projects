/*P2 To interface IR sensorwith Arduino UNO and write a program to Display 1 or 0 on sensor detection.*/

int IR=9;
int IRvalue;
int LED=13;

void setup()
{
Serial.begin(9600);
pinMode(IR, INPUT);
pinMode(LED, OUTPUT);
}
void loop()
{
IRvalue=digitalRead(IR);
if (IRvalue==1)
{
digitalWrite(LED, HIGH);
Serial.println("1");
}
else
{
digitalWrite(LED, LOW);
Serial.println("0");
}
delay(1000);
}