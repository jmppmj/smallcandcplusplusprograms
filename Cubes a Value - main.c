/*///////////////////////////Purpose of Program///////////////////////////
This program cubes a value.
///////////////////////////Algorithm///////////////////////////////////
Step 1 - Prompt user for a value to be cubed.
Step 2 - Raise value to the power of 3, pow(base, power).
Step 3 - Display value to user. 
Step 4 - End program.

Language: C/C++
Compiler: GNU GCC - C++11
Use -lm to compile in UNIX.

*/

#include <stdio.h>
#include <math.h>

double FUNCTION1(void);
double FUNCTION2(double);
void FUNCTION3(double, double);

int  main ( void ){
 
    double input = 0.0, result = 0.0;

//Prompt user for a value to be cubed.

    input = FUNCTION1();

//Raise value to the power of 3, pow(base, power).

    result = FUNCTION2(input);

//Display value to user. 

    FUNCTION3(input, result);

    return ( 0 ) ;

}   

double FUNCTION1(void) 
{
    double userinput = 0.0;
    printf("\n\nEnter a value to be cubed: ");
    scanf("%lf", &userinput);
    return(userinput);
}

double FUNCTION2(double userinput)
{
    double total = 0.0;
    total = pow(userinput, 3);
    return(total);
}

void FUNCTION3(double userinput, double finalresult)
{
    printf("\n\n\nThe value of %.2lf cubed is", userinput);
    printf(" %.2lf.\n\n\n", finalresult);
    return;
}

//End Program




