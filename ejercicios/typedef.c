#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    TEA,   // 0
    COFFE, // 1
    JUICE, // 2
    BEER,  // 3
} Menu;  // Por regla general el nuevo tipo debe empezar con mayúscula

// Otro ejemplo de typedef
 typedef unsigned char byte;

int main ()
{
    printf("\n========== * ==========\n\n");

    // Declaramos variables de tipo Menu
    Menu mario = COFFE;
    Menu andrea = BEER;

    // Declaramos variable de tipo byte
    byte b = 0xff;

    printf("Mario: %d\n", mario);
    printf("Andrea: %d\n", andrea);

    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}