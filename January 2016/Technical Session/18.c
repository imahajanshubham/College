/*QUESTION - 18.*/

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
        while(firstNumber != secondNumber) {
                printf("\t  %.3f -> (POW) %.3f | (SQRT) %.3f", firstNumber, pow(firstNumber, 2), sqrt(firstNumber));   firstNumber++;   printf("\n");
        }
}
