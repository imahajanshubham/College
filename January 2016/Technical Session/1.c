/*QUESTION - 1*/

#include <stdio.h>
#include <stdlib.h>

#define LASTNUMBER 15
#define START 1

void getTheNumber();
void printTable();

int number, iterator;

int main()
{
        system("clear");
        getTheNumber();
}

void getTheNumber()
{
        printf("Ubuntu:~$ ");   scanf("%d", &number);
        printTable();
}

void printTable()
{
        iterator = START;
        while(iterator <= LASTNUMBER) {
                printf("         %d x %d = %d\n",number, iterator++, number * iterator);
        }
}
