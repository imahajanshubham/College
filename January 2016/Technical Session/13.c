/*QUESTION - 13.*/

#include <stdio.h>
#include <stdlib.h>

#define START 1

void getInput();
void printPattern();

int rowIndex, columnIndex, range, iterator, binary;

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
        for(rowIndex = START; rowIndex <= range / 2; rowIndex++) {
                printf("\t  ");   printf("|");
                for(columnIndex = START + 1; columnIndex < range; columnIndex++) {
                        if(rowIndex == START || rowIndex == range / 2) printf("|");
                        else printf(" ");
                }
                
                printf("|");
                printf("\n");
        }
}
