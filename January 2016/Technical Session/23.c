/*QUESTION - 23.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define START 1

void getInput();
void printPattern();

int rowIndex, columnIndex, secondNumber, firstNumber;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d %d", &firstNumber, &secondNumber);
        printPattern();
}

void printPattern()
{
        for(rowIndex = firstNumber; rowIndex <= secondNumber; rowIndex++) {
                printf("\t  ");
                for(columnIndex = secondNumber; columnIndex >= rowIndex; columnIndex--) printf("%d ", rowIndex);
                
                printf("\n");
        }
}
