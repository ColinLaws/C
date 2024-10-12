#include <stdio.h>

int main()
{
    char c = getchar();
    printf("You entered: ");
    putchar(c);
    putchar('\n');

    printf("The hexadecimal integer equivalent is: %x\n", c);
    printf("The decimal equivalent is: %d\n", c);
    printf("The octal integer equivalent is: %o\n", c);
}