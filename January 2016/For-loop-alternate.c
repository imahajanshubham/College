#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, count;
    
    count = 0;
    
    system("clear");
    
    i = 0;
    
    for(j = 0; j < 50; j++) {
    
        printf("#");
        i++;
        
        if(i == 50) {
            printf("\n");
            j = -1;
            i = 0;
            count++;
        }
        
        if(count == 10) {
            break;
        }
    }
    
    /*This is what I wanted to do -
    
        for(i = 0; i < 50; i++) {
            
            for(j = 0; j < 10; j++) {
                printf("#");
            }
            printf("\n");
            
        }
    
        OUTPUT - ##########
                 ##########
                 ##########
                 ##########
                    and like that...
    
    */
    
    return 0;
}
