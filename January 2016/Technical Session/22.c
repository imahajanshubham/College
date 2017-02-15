/*QUESTION - 22.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define START 0

void getInput();
void printData();

int number, sum;

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
        sum = START;
        while(number) {
                sum += '0' + number % 10;   number /= 10;
        }
        
        printf("\t  %d\n", sum);
}
