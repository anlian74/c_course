#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main ()
{
    int variable = 0;

    printf("\n========== * ==========\n\n");

    printf("%lu\n", sizeof(variable));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long int));
    printf("%lu\n", sizeof(long long int));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int16_t));
    printf("%lu\n", sizeof(int32_t));
    printf("%lu\n", sizeof(int64_t));
    printf("%lu\n", sizeof(123LL && 456LL));

    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}