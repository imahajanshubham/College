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
        rowIndex = range;   iterator = START;   columnIndex = START;   secondaryRange = range;
        while(rowIndex >= START) {
                printf("\t  ");
                while(iterator < rowIndex) {
                        printf(" ");   iterator++;
                }
                
                while(columnIndex >= secondaryRange+1) {
                        printf("*");   columnIndex--;
                }
                
                printf("\n");   iterator = START;   rowIndex--;   columnIndex = range;   secondaryRange -= 2;
        }
}
