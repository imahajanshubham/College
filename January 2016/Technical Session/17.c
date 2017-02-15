/*QUESTION - 17.*/

#include <stdio.h>
#include <stdlib.h>

#define START 9
#define END 0

void getInput();
void checkNumber();

int number, lastDigit, firstDigit, dummyNumber;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d", &number);
        checkNumber();
}

void checkNumber()
{
        dummyNumber = number;   lastDigit = number % 10;
        while(dummyNumber) {
                firstDigit = dummyNumber % 10;   dummyNumber /= 10;
        }
        
        if(firstDigit == START && lastDigit == END)   printf("\t  TRUE");
        else printf("\t  FALSE");   printf("\n");
}
