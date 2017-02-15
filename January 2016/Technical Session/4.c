/*QUESTION - 4.*/

#include <stdio.h>
#include <stdlib.h>

#define START 1

void getInput();
void printPattern();

int rowIndex, columnIndex, range;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d", &range);
        printPattern();
}

void printPattern()
{
        rowIndex = columnIndex = START;
        while(rowIndex <= range) {
                printf("\t  ");
                while(columnIndex <= rowIndex) {
                        printf("*");   columnIndex++;
                }
                
                printf("\n");   columnIndex = START;   rowIndex++;
        }
}
