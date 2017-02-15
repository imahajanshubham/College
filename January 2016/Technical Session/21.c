/*QUESTION - 21.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void getInput();
void printData();

int firstNumber, secondNumber;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d %d", &firstNumber, &secondNumber);
        printData();
}

void printData()
{
        while(firstNumber <= secondNumber) {
                printf("%c -> %d\t", firstNumber, firstNumber);   firstNumber++;
        }
}
