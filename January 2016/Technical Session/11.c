/*QUESTION - 11.*/

#include <stdio.h>
#include <stdlib.h>

#define START 1
#define TRUE 0

void getInput();
void printPattern();

int rowIndex, columnIndex, startingNumber, endingNumber, tempStart, tempEnd, difference, tempDifference, spaceCount, firstDiff, secondDiff, buffer, counter;

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d %d", &startingNumber, &endingNumber);
        printPattern();
}

void printPattern()
{
        tempStart = firstDiff = buffer = startingNumber;   tempEnd = secondDiff =endingNumber;   difference = tempDifference = startingNumber - endingNumber;
        for(rowIndex = START; rowIndex <= difference + 1; rowIndex++) {
                printf("\t  ");
                for(spaceCount = START; spaceCount < rowIndex; spaceCount++) {
                        printf("   ");
                }
                for(columnIndex = tempStart; columnIndex >= tempEnd; columnIndex--) {
                        
                        if(columnIndex < 0) printf("%d ", columnIndex);
                        else if(columnIndex < 10) printf("%d  ", columnIndex);
                        else printf("%d ", columnIndex);   buffer--;
                }
                
                printf("\n");
                buffer = tempStart;
                tempStart = tempEnd - 1;
                tempEnd = tempEnd - (buffer - tempEnd);
        }
}


