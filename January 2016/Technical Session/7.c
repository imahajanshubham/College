/*QUESTION - 7.*/

#include <stdio.h>
#include <stdlib.h>

#define START 0

void getInput();
void calculateSum();

int number, digit, sum;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d", &number);
        calculateSum();
}

void calculateSum()
{
        sum = START;
        while(number) {
                digit = number % 10;
                sum += digit;
                number /= 10;
        }
        printf("\t  %d\n", sum);
}
