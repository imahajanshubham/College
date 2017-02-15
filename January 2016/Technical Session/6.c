/*QUESTION - 6.*/

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
        iterator = range;
        for(rowIndex = START; rowIndex <= range; rowIndex++) {
                
                printf("\t  ");
                for(columnIndex = START; columnIndex <= iterator; columnIndex++) {
                        printf("%d", columnIndex);
                }
                
                printf("\n");   iterator--;
        }
}
