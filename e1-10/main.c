#include <stdio.h>

#define IN  1
#define OUT 0

/* this program takes input and replaces tabs with \t, 
    backspaces with \b, and \ with \\ */
int main()
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
                break;
        }
    }
}