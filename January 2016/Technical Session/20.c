/*QUESTION - 20.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define START 0

void getInput();
void printData();

int number, reversedNumber, digit;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d", &number);
        printData();
}

void printData()
{
        reversedNumber = START;
        while(number) {
                digit = number % 10;   reversedNumber = reversedNumber * 10 + digit;   number /= 10;
        }
        
        printf("\t  %d\n", reversedNumber);
}
