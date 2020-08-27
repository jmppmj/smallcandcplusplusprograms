/*///////////////////////////Purpose of Program///////////////////////////
Checks if an integer is a prime number.
///////////////////////////Algorithm///////////////////////////////////

1 - Introduce program.
2 - Prompt user for an integer.
3 - Record the integer.
4 - Test if number is prime.
5 - If number is prime, display message.
6 - If number is not prime, display message.
7 - End program.

Language: C/C++
Compiler: GNU GCC - C++11

*/

#include <stdio.h>

int PCF_1 (void);
char PCF_2 (int);
void PCF_3(char, int);

int  main ( void )

{
    char primeornot = 'P';
    int userInput = 0;

//Introduce program.
    printf("\nThis program determines if a number is prime or not.\n");

//Prompt user for an integer.
//Record the integer.

    userInput = PCF_1();

//Test if number is prime.

    primeornot = PCF_2(userInput);

//If number is prime, display message.
//If number is not prime, display message.
    
    PCF_3(primeornot, userInput);

    return ( 0 ) ;


}  

int PCF_1 (void) {
    int userInput = 0;
    printf("\nPlease enter a positive integer (greater than 1): ");
    scanf("%d", &userInput);
    return(userInput);
}

char PCF_2 (int usersNum) {
    int i = 0;
    char isPrime = 'P';
    for (i = usersNum - 1; i >= 2; --i) {
        if (usersNum % i == 0) {
            isPrime = 'N';
        }
    }
    return (isPrime);
}

void PCF_3 (char primeornotmsg, int Input) {
    int i = 0, factoR = 0;
    if (primeornotmsg == 'N') {
        printf("\nThe number %d is NOT prime.\n", Input);
        printf("\nFactors of %d ", Input);
        printf("(in addition to 1 and %d) are: ", Input);
        for (i = Input - 1; i >= 2; --i) {
            if (Input % i == 0) {
                factoR = i;    
                printf("%d   ", factoR);
            }
        }
        printf("\n\n");
    }
    else {
        printf("\nThe number %d is prime.\n", Input);   
    }
    return;
}



