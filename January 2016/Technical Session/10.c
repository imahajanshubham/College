/*QUESTION - 10.*/

#include <stdio.h>
#include <stdlib.h>

#define START 0
#define TRUE 0

void getInput();
void findOddAndEvenNumber();
void printData();

int firstNumber, lastNumber, iterator, evenSum, oddSum;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d %d", &firstNumber, &lastNumber);
        findOddAndEvenNumber();
}

void findOddAndEvenNumber()
{
        oddSum = evenSum = START;
        for(iterator = firstNumber; iterator <= lastNumber; iterator++) {
                if(iterator % 2) oddSum += iterator;
                else evenSum += iterator;
        }
        
        printData();
}

void printData()
{
        printf("\t  Even: %d\n", evenSum);      printf("\t  Odd: %d\n", oddSum);
}


