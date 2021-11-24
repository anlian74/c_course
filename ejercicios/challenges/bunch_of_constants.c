/**
 * === Bunch Of Constants ===
 *
 * Define the following numeric constants:
 *  - moonLanding: 1969
 *  - speedOfLight: 299792458
 *  - pi: 3.142
 *  - hexaDead: 0xDEAD
 *  - hexaSecret: 51966
 *
 * Print with following formats:
 *  - moonLanding:
 *      - integer, 10 characters width, padded with spaces
 *      - integer, 10 characters width, padded with zeroes
 *  - speedOfLight:
 *      - floating point without digits after decimal point
 *      - scientific notation with 3 digit of precision
 *  - pi:
 *      - floating point with 2 digits of precision
 *      - scientific notation with 1 digit of precision, sign forced
 *  - hexaDead:
 *      - unsigned hexadecimal integer, uppercase, leading 0x
 *      - unsigned integer, 6 characters width
 *  - hexaSecret:
 *      - unsigned hexadecimal integer, lowercase, no leading 0x
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main ()
{
    const uint16_t MOONLANDING = 1969U;
    const double SPEEDOFLIGHT = 299792458.;
    const double PI = 3.142;
    const uint16_t HEXADEAD = 0xDEADU;
    const uint16_t HEXASECRET = 51966U;


    printf("\n========== * ==========\n\n");

    printf("Moon landing:\n %10d\n %010d\n\n", MOONLANDING, MOONLANDING);
    printf("Speed of light: \n %.0f\n %.3e\n\n", SPEEDOFLIGHT, SPEEDOFLIGHT);
    printf("Pi:\n %.2f\n %+.1e\n\n", PI, PI);
    printf("Hexa dead: \n 0x%X\n %6u\n\n", HEXADEAD, HEXADEAD);
    printf("Hexa secret:\n %x\n\n", HEXASECRET);

    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}