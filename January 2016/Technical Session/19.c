/*QUESTION - 19.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void getInput();
void printData();

float firstNumber, secondNumber;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%f %f", &firstNumber, &secondNumber);
        printData();
}

void printData()
{
        while(firstNumber <= secondNumber) {
                printf("\t  %.3f -> %.3f", firstNumber, pow(firstNumber, 2) + firstNumber);   firstNumber++;   printf("\n");
        }
}
