// Note - WHOI Propeller Clock class:
// For the Feather 328P development board, use of
// pins 13 and 11 in the array below depends on re-routing
// two of the LED tracks from pins with Arduino names A6 and A7 (analog input only)
// to adjacent pins with Arduino number 13 (name SCK) and number 11 (name MOSI).
// See https://cdn-learn.adafruit.com/assets/assets/000/110/541/original/Adafruit_Feather_328P_Pinout.svg?1649182317
int ledPins[] = {7, 13, 11, 17, 16, 15, 5, 6, 9, 10, 2, 3};
int NUM_PINS = 12;

void setup()
{
  for (int i = 0; i < NUM_PINS; i++)
  {
    pinMode(ledPins[i],OUTPUT);
  }
}

void loop()
{
  for(int j = NUM_PINS - 1; j > 0; j--)
  {
    int i = ledPins[j];
    digitalWrite(i, HIGH);   // turn on the LED
    delay(100);              // wait for one tenth of a second
    digitalWrite(i, LOW);    // turn off the LED
  }

  for(int j = 0; j < NUM_PINS - 1; j++)
  {
    int i = ledPins[j];
    digitalWrite(i, HIGH);   // turn on the LED
    delay(100);              // wait for one tenth of a second
    digitalWrite(i, LOW);    // turn off the LED
  }
}
