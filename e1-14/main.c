#include <stdio.h>

#define BAR_COUNT 128 

/* generates a histogram of the frequency of chars in the input 
    counts all ASCII chars frequncy, but only prints ! through ~ */
int main()
{
    int c, i, j;

    int bars[BAR_COUNT];  /* one bar for every ASCII character */
    
    for (i = 0; i < BAR_COUNT; ++i)
        bars[i] = 0;   /* initialize all indexes to value zero */

    while((c = getchar()) != EOF)
    {
        ++bars[c];  /* record the occurrence of this char */
    }

    /* for most printable ASCII characters, from ! to ~ */
    for (i = '!'; i <= '~'; ++i)
    {
        putchar(i);                     /* the char we are generating a bar for */
        printf(" |");                   /* formatting */

        for (j = 0; j < bars[i]; ++j)
            putchar('#');               /* draw the bar */

        putchar('\n');
    }
}
