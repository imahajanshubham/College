/*QUESTION - 24.*/

#include <stdio.h>
#include <stdlib.h>

#define LOW 0
#define HIGH 1

void getInput();
void printData();

int range, firstNumber, secondNumber, nextNumber, iterator;

int main()
{
        system("clear");
        getInput();
 
   return 0;
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d", &range);   printData();
}

void printData()
{
        firstNumber = LOW;   secondNumber = HIGH;
        for (iterator = LOW; iterator < range; iterator++)
        {
                if(iterator <= 1) nextNumber = iterator;
                else
                {
                        nextNumber = firstNumber + secondNumber;   firstNumber = secondNumber;   secondNumber = nextNumber;
                }
                printf("\t  %d\n", nextNumber);
        }
}
