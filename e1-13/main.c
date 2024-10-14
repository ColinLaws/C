#include <stdio.h>

#define IN       1
#define OUT      0
#define INTERVAL 4  /* represents the size of intervals for the histogram */
#define BARS     16 /* the total number of bars in the histogram, 
                        max word count is INTERVAL * RANGE */

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

            if (acc > RANGE)    /* when the char count spills over the range size */
            {
                ++i;            /* increment the bar index */
                acc = 0;        /* reset the char count accumulator */
            }
        }
    }

    // for (i = 1; i < BARS + 1; ++i)
    // {
           /* I'm stuck on calculating the min and max numbers of each range to print the bars.
              The count for each element of the histogram data is correct. 
              I just need to print the data now. 
            */
    //     printf("%d:%d", ((i * INTERVAL) - (INTERVAL + 1)), );
    // }
}
