/*///////////////////////////Purpose of Program///////////////////////////
Prompts user for a sentence.
Prints sentence backwards.
Sorts sentence into lowercase, alphabetical order. Prints it.
Prints each word (minus punctuation) of sentence on a new line.

Language: C/C++
Compiler: GNU GCC - C++11

//////////////////////////////////////////////////////////////////////*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void printBackwards(char *);
char alpha(char *);
void printForwards(char *);
void printEachWord(char *);
void lowerCase(char *);

#define SIZEOFSENTENCE 100  //Size of the sentence expected to be entered by a user.

int main()
{
    char str[SIZEOFSENTENCE];
    char arraytoSort[SIZEOFSENTENCE];

    //Prompts user for a sentence.
    //Copies sentence into two arrays.
    printf("Please enter a sentence: ");
    gets(str);
    strcpy(arraytoSort, str);

    //Prints sentence backwards.
    printf("Your sentence backwards: ");
    printBackwards(str);

    //Changes full sentence into lowercase letters.
    //Sorts sentence into alphabetical order.
    lowerCase(arraytoSort);
    alpha(arraytoSort);

    //Prints newly alphabetized sentence forwards.
    printf("All letters in sentence alphabetized: ");
    printForwards(arraytoSort);

    //Prints each word on a newline.
    printf("Your sentence split into words (minus punctuation):\n");
    printEachWord(str);

    //Keeps the console window open after program is complete.
    printf("Hit 'ENTER' to exit.\n");
    fflush(stdout);
    (void)getchar();

    return 0;
}

///////////FUNCTIONS///////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
void printBackwards(char *array) {

    //Prints sentence backwards.
    int i = 0, size = 0;

    size = strlen(array) - 1;

    for (i = size; i >= 0; i--){
        if((isalnum(array[i]))||(isblank(array[i]))){
            printf("%c", array[i]);
        }
    }

    printf("\n");

   return;
}

///////////////////////////////////////////////////////////////////////

char alpha(char *array) {

    //Sorts sentence into alphabetical order.
    //Prints sentence.
    char temp;
    int a = 0, b = 0, length = 0;

    length = strlen(array) - 1;

    for (a = length; a >= 0; a--){
        for (b = 0; b < a; b++){
            if (array[a] < array[b]){
                temp = array[b];
                array[b] = array[a];
                array[a] = temp;
            }
        }
    }

   return;
}

///////////////////////////////////////////////////////////////////////

void printForwards(char *array) {

    //Prints array forwards.
    int c = 0, length = 0;

    length = strlen(array);

    for(c = 0; c != length; c++){
        if(isalnum(array[c])){
            printf("%c",array[c]);
        }
    }
    printf("\n");

   return;
}

///////////////////////////////////////////////////////////////////////

void printEachWord(char *array) {

    //Prints each word on a newline.
    char gateKeeper[] = " ,/,+,*,&,^,%,$,#,@,!,},{,\,|,>,<,.,,,:,;,?,/,(,),\",',\t,\n";
    char* word = strtok(array,gateKeeper);

    while (word != NULL){
        printf("%s \n", word);
        word = strtok(NULL, gateKeeper);
    }

   return;
}

///////////////////////////////////////////////////////////////////////

void lowerCase(char *array) {

    //Converts all elements of array to lowercase.
    int y = 0, length = 0;

    length = strlen(array);

    for(y = 0; y != length; y++){
        array[y] = tolower(array[y]);
    }

    return;
}
///////////////////////////////////////////////////////////////////////
