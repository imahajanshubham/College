/*QUESTION - 5.*/

#include <stdio.h>
#include <stdlib.h>

#define START 1

void getInput();
void printPattern();

int rowIndex, columnIndex, range, iterator, secondaryRange;

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
        rowIndex = iterator = START;   columnIndex = range * 2;   secondaryRange = range * 2;
        while(rowIndex <= range) {
                printf("\t  ");
                while(iterator <= rowIndex) {
                        printf(" ");   iterator++;
                }
                
                while(columnIndex >= rowIndex) {
                        printf("*");   columnIndex--;
                }
                
                printf("\n");   columnIndex = --secondaryRange;   rowIndex++;   iterator = START;
        }
}
