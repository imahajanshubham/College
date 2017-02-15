/*QUESTION - 8.*/

#include <stdio.h>
#include <stdlib.h>

#define START 1
#define TRUE 0
#define SPACE " "

void getInput();
void checkRangeIsOddOrEven();
void printPattern();

int rowIndex, columnIndex, range, mid;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d", &range);
        checkRangeIsOddOrEven();
}

void checkRangeIsOddOrEven()
{
        if((range % 2) == TRUE) range++;
        
        mid = range / 2;
        printPattern();
}

void printPattern()
{
        for(rowIndex = START; rowIndex <= range; rowIndex++) {
                if(rowIndex == START) {
                        printf("\t  ");     for(columnIndex = START; columnIndex <= range; columnIndex++) printf("I");
                        printf(SPACE);      for(columnIndex = START; columnIndex <= range; columnIndex++) printf("T");
                        printf(SPACE);      for(columnIndex = START; columnIndex <= range; columnIndex++) printf("S");
                }
                else {
                        if(rowIndex < range) {
                                printf("\t  ");         for(columnIndex = START; columnIndex <= mid; columnIndex++) printf(SPACE);
                                printf("I");            for(columnIndex = START; columnIndex <= mid; columnIndex++) printf(SPACE);
                        }
                        else {
                        printf("\t  ");     for(columnIndex = START; columnIndex <= range; columnIndex++) printf("I");
                        }
                        printf(SPACE);      for(columnIndex = START; columnIndex <= mid; columnIndex++) printf(SPACE);
                        printf("T");        for(columnIndex = START; columnIndex <= mid; columnIndex++) printf(SPACE);
                        
                        if(rowIndex <= mid) {
                                printf(SPACE);   printf("S");
                        }
                        else if(rowIndex == range) {
                                printf(SPACE);           for(columnIndex = START; columnIndex <= range; columnIndex++) printf("S");
                        }
                        else if(rowIndex == mid + 1) {
                                printf(SPACE);           for(columnIndex = START; columnIndex <= range; columnIndex++) printf("S");
                        }
                        else {
                                if(columnIndex < range) {
                                        printf(SPACE);   for(columnIndex = START; columnIndex < range; columnIndex++) printf(SPACE);
                                }
                                
                                printf("S");
                        }
                        
                }
                
                printf("\n");
        }
}
