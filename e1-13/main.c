#include <stdio.h>

#define IN       1
#define OUT      0
#define INTERVAL 4  /* represents the size of intervals for the histogram */
#define BARS     16 /* the total number of bars in the histogram, 
                        max word count is INTERVAL * BARS */

/* generates a histogram of the lengths of words in the input */
int main()
{
    int c, acc, i, state;
    float calc;

    /* each index stores char count of words in multiples of 4
        0 = 1-4, 1 = 5-9, 2 = 10-14, 3 = 15-19, up to 16 = 60-64  */
    int histogramData[BARS];  
    
    for (i = 0; i < BARS; ++i)
        histogramData[i] = 0;   /* initialize all indexes to value zero */

    state = OUT;
    acc = i = 0;
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                /* accumulate the count for the current bar, reset i and acc */
                ++histogramData[i];
                acc = i = 0;

                state = OUT;
            }
        }
        else 
        {
            if (state == OUT)
                state = IN;     /* we are now in a word */

            ++acc;              /* accumulate the char count */

            if (acc > INTERVAL)    /* when the char count spills over the range size */
            {
                ++i;            /* increment the bar index */
                acc = 0;        /* reset the char count accumulator */
            }
        }
    }

    int min, max, j = 0;
    for (i = 0; i < BARS; ++i)
    {
        if (i == 0)
        {
            min = 1;
            max = INTERVAL;
        }
        else
        {
            min = i * (INTERVAL + 1);
            max = min + INTERVAL;
        }

        printf("%d-%d \t|", min, max);          /* prints the range for the current bar */

        for (j = 0; j < histogramData[i]; ++j)
            putchar('#');                       /* draw the bar using # per each occurrence */

        putchar('\n');
    }
}
