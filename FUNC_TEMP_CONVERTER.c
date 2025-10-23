/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:PROGRAM THAT CONVERTS TEMPERATURE FROM FAHRENHEIT TO DEGREES
*/

#include <stdio.h>
#include <stdlib.h>

float convertToCelsius(int temperature_);

int main()
{
    int temp;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &temp);

    float temperature_ = convertToCelsius(temp);

    printf("The temperature is %.2f Celcius\n", temperature_);
    return 0;
}

float convertToCelsius(int temperature_){
    float F = temperature_;
    float C = (F - 32) * (5.0 / 9.0);
    return C;
}
