#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n========== * ==========\n\n");

     char c = 'A';

    printf("char c: %d\n", c);
    printf("char c: %c\n", c);

    c = 66;

    printf("char c: %c\n", c);

    // Acquire use input
    printf("Input a character: ");
    c = getchar();
    printf("You entered: %c\n", c);

    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}