#define LED 21

hw_timer_t * timer = NULL;

void ARDUINO_ISR_ATTR onTimer()
{
  digitalWrite(LED, !digitalRead(LED));
}

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(34, INPUT);
  timer = timerBegin(1000000);
  timerAttachInterrupt(timer, &onTimer);
  timerAlarm(timer, 1000000, true, 0);
}

void loop()
{
    if(digitalRead(34) == HIGH)
    {
      timerEnd(timer);
    }
}
