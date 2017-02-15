/*QUESTION - 12.*/

#include <stdio.h>
#include <stdlib.h>

#define START 1
#define TRUE 1
#define FALSE 0

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
        iterator = range;   binary = FALSE;
        for(rowIndex = START; rowIndex <= range; rowIndex++) {
                
                printf("\t  ");
                for(columnIndex = START; columnIndex <= iterator; columnIndex++) {
                        if(binary == TRUE) binary = FALSE;
                        else binary = TRUE;
                        printf("%d", binary);
                }
                
                printf("\n");   iterator--;
                binary = FALSE;
        }
}
