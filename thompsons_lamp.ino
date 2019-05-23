int pushbutton = 2;
int led = 13;
float x = 7500;
int state;
float a;
float b;
void setup() {
  pinMode(pushbutton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  state = digitalRead(pushbutton);
  if (state == 1)
  {
    digitalWrite(led, HIGH);
    if (x < 100)
    {
      a = x * 1000;
      delayMicroseconds(a);
    }
    else
    {
      delay(x);
    }
    digitalWrite(led, LOW);
    x = x / 2;
    if (x < 100)
    {
      b = x * 1000;
      delayMicroseconds(b);
    }
    else
    {
      delay(x);
    }
  }
}
