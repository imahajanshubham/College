/*QUESTION - 3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printArmstrongNumber();

#define TENS 10
#define HUNDREDS 100
#define THOUSANDS 1000
#define TENTHOUSANDS 10000

int iterator, firstNumber, lastNumber, onesDigit, tensDigit, hundredsDigit, thousandsDigit, number;

void getInput();

int main()
{
    system("clear");
    getInput();
}

void getInput()
{
        printf("Ubuntu:~$ ");   scanf("%d %d", &firstNumber, &lastNumber);   printArmstrongNumber();
}

void printArmstrongNumber()
{
        iterator = firstNumber;
        while(iterator <= lastNumber) {
                onesDigit      = iterator               - ((iterator / TENS)         * TENS);
                tensDigit      = (iterator / TENS)      - ((iterator / HUNDREDS)     * TENS);
                hundredsDigit  = (iterator / HUNDREDS)  - ((iterator / THOUSANDS)    * TENS);
                thousandsDigit = (iterator / THOUSANDS) - ((iterator / TENTHOUSANDS) * TENS);
                number = pow(onesDigit, 3) + pow(tensDigit, 4) + pow(hundredsDigit, 3) + pow(thousandsDigit, 3);
                if(number == iterator) {
                        printf("\t  %d\n", iterator);
                }
                
                iterator++;
        }
}
