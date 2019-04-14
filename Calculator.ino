#include "Calculator.h"

void setup()
{
    Serial.begin(9600);
}

void loop()
{
	Calculator Me;
    Me.Fn1(50,50);

    Serial.print(Me.Sum);
    delay(500);
}
