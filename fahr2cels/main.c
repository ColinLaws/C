#include <stdio.h>

/* print a Fahrenheit-Celsius table 
    for fahr = 0, 20, ..., 300 */
// int main()
// {
//     float fahr, celsius;
//     int lower, upper, step;

//     lower = 0;      /* lower limit of the temp table */
//     upper = 300;    /* upper limit of the temp table */
//     step = 20;      /* step size */

//     fahr = lower;   /* start the table at the lower limit */

//     /* table header */
//     printf("Fahr\tCels\n");
//     printf("-----------------------\n");

//     while (fahr <= upper) {
//         celsius = (5.0/9.0) * (fahr - 32.0);
//         printf("%3.0f\t\t%3.2f\n", fahr, celsius);
//         fahr += step;
//     }
// }

#define     LOWER   0
#define     UPPER   300
#define     STEP    20

int main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr + 32));
}