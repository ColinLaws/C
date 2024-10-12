#include <stdio.h>

#define IN  1   /* mode when the last char was a space */
#define OUT 0   /* mode when we the last char was not a space */

/* just a quick note, this program was a line counter until
    I continued on with exercise 1-9 and overwrote the code*/
int main()
{
    int c, state;

    state = OUT;

    while (((c = getchar()) != EOF))
    {
        if (c == ' ' && state == OUT)   /* the current char is a space */
        {
            state = IN;
            putchar(c);
        }
        else if (state == IN)           /* the last char was a space */
        {
            if (c != ' ')
            {
                state = OUT;            /* exit state and print char */
                putchar(c);
            }
        }
        else
        {
            putchar(c);                 /* default to printing input */
        }
    }
}
 