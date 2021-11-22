#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n========== * ==========\n\n");

    /* 1.23456789 */
    double decimalDigits = 1.23456789;

    /* 7.801 x 10⁹*/
    double worldPopilation = 7.801E9;

    /* 6.626 x 10^-34*/
    double plankConstant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digits\n", decimalDigits);
    printf("%12.1f | worlPopulation, decimal, 1 digits of precision\n", worldPopilation);
    printf("%12.1e | worlPopulation, scientific, 1 digits of precision\n", worldPopilation);
    printf("%12.3e | worlPopulation, scientific, 3 digits of precision\n", worldPopilation);
    printf("%12.1e | plankConstant, scientific, 3 digits of precision\n", plankConstant);
    printf("%12.3e | plankConstant, scientific, 3 digits of precision\n", plankConstant);

    printf("\n========== * ==========\n\n");
}