#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

float fahrenheit_to_celsius(int fahr);

int main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t%6.1f\n", fahr, fahrenheit_to_celsius(fahr));
}

float fahrenheit_to_celsius(int fahr)
{
    return (5.0/9.0) * (fahr + 32);
}
