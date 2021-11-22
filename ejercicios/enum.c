#include <stdio.h>
#include <stdlib.h>

/* Por defecto
enum menu
{
    TEA,   // 0
    COFFE, // 1
    JUICE, // 2
    BEER,  // 3
};
*/

// Asignando valores de forma explicita
// enum menu
// {
//     TEA = 10,
//     COFFE = 20,
//     JUICE  = 30,
//     BEER = 40,
// };

// En este caso las dos primera constantes seran 0 y 1
// Y apartir del JUICE 100, 101, ....
// enum menu
// {
//     TEA,
//     COFFE,
//     JUICE = 100,
//     BEER,
// };

enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
};

int main ()
{
    printf("\n========== * ==========\n\n");

    enum months myFavouriteMonth = JUL;
    enum months myWorstMonth = NOV;

    printf("Andrea's favourite month: %d\n", myFavouriteMonth);
    printf("Andrea's worst month: %d\n", myWorstMonth);

    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}