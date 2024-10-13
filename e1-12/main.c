#include <stdio.h>

#define IN  1
#define OUT 0

/* Prints one input word per line, removes padding between words */
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            /* do not set state = OUT if it's already out
                this prevents \n for multiple spaces */
            if (state != OUT)
            {
                state = OUT;
                putchar('\n');
            }
        }
        else if (state == OUT) 
        {
            state = IN;
            putchar(c);
            ++nw;
        }
        else
        {
            putchar(c);
        }
    }
}
