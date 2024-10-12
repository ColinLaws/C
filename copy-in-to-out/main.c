#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    printf("End of file char is: %c", EOF);
}
