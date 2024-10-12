#include <stdio.h>

/* print a Celsius-Fahrenheit table 
    for cels = 0, 20, ..., 300 */
int main()
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;      /* lower limit of the temp table */
    upper = 300;    /* upper limit of the temp table */
    step = 20;      /* step size */

    fahr = lower;   /* start the table at the lower limit */

    /* table header */
    printf("Cels\tFahr\n");
    printf("-----------------------\n");

    
    while (cels <= upper) {
        fahr = (cels / (5.0/9.0)) + 32.0;       /* F = (C / (5/9)) + 32*/
        printf("%3.0f\t%3.2f\n", cels, fahr);
        cels += step;
    }
}