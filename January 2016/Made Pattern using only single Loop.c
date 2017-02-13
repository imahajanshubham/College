#include <stdio.h>
#include <stdlib.h>

#define START 0
#define NOOFROW 9
#define NOOFCOLUMN 17

int main()
{
        int rowIterator, columnIterator, iterator, spaceCount, starCount, starLimit, spaceLimit, secondSpaceCount, thirdLimit, secondStarCount;
        system("clear");
        
        rowIterator = spaceCount = starCount = secondSpaceCount = secondStarCount = spaceLimit = START;
        thirdLimit = NOOFCOLUMN;        starLimit = NOOFROW;
        
        for(columnIterator = START; columnIterator <= NOOFCOLUMN; columnIterator++) {
                if(spaceCount < rowIterator) {
                        printf(" ");    spaceCount++;
                }
                else {
                        if(rowIterator != START) {
                                if(rowIterator > 3) {
                                        if(starCount < thirdLimit) {
                                                printf("*");    starCount++;
                                        }
                                        
                                }
                                else {
                                        if(starCount < starLimit) {
                                                printf("*");    starCount++;
                                        }
                                        else {
                                                if(rowIterator < 4) {
                                                        if(secondSpaceCount < spaceLimit-1) {
                                                                printf(" ");    secondSpaceCount++;
                                                        }
                                                        else if(secondStarCount <= starLimit - 1) {
                                                                printf("*");    secondStarCount++;
                                                        }
                                                }
                                                else {
                                                        printf("*");    starCount++;
                                                }
                                        }
                                }
                        }
                        else {
                                printf("*");
                        }
                }
                
                if(rowIterator == NOOFROW) {
                        break;
                }
                if(columnIterator == NOOFCOLUMN - 1) {
                        rowIterator++;
                        columnIterator = (secondStarCount = starCount = spaceCount = secondSpaceCount = START) - 1;
                        spaceLimit += 2;        thirdLimit -= 2;        starLimit -= 2;
                        printf("\n");
                }
        }   
        
        return 0;
}
