/*///////////////////////////Purpose of Program///////////////////////////
This program calculates the volume of a cylinder.
///////////////////////////Algorithm///////////////////////////////////
    1. Introduce the program
    2. Prompt user for height of a cylinder.
    3. Record height of cylinder.
    4. Prompt user for radius of a cylinder.
    5. Record radius of cylinder.
    6. Calculate volume of cylinder (pi * height * (radius * radius))
    7. Display overall results: height/radius/calculated volume.
    8. End program.

Language: C/C++
Compiler: GNU GCC - C++11
*/

#include <stdio.h>

#define thePi 3.14159

int  main ( void ){

    float theHeight = 0.0;
    float theRadius = 0.0;
    float theVolume = 0.0;

//Introduce the program.

    printf("\nThis program calculates the volume of a cylinder\n");

//Prompt user for the height of a cylinder.

    printf("\nPlease enter the height of a cylinder in inches: ");

//Record user input for height.

    scanf("%f", &theHeight);

//Prompt user for the radius of a cylinder.

    printf("\nPlease enter the radius of a cylinder in inches: ");

//Record user input for radius.

    scanf("%f", &theRadius);

//Calculate the volume of the cylinder.

    theVolume = thePi * theHeight * (theRadius * theRadius);

//Display overall results to user.

    printf("\nThe volume of a cylinder with"); 
    printf("\na height of %.3f", theHeight);
    printf("\nand a radius of %.3f", theRadius); 
    printf("\nis %.3f cubic inches\n", theVolume);

//End the program.

    printf("\nThanks for using this program! Bye.\n");

    return ( 0 ) ;

}  









