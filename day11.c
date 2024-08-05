#include"stdio.h"
#include "additional.h"
int main(){
    start();

        int r;
        printf("Give number of rows\t : ");
        scanf("%d",&r);

        for (int i = 1; i <= r; i++)
        {
            for (int  j= 1; j < i; j++)
            {
                printf("|");
            }
            for (int k = 1; k <=  (i*2)-1; k--)
            {
                printf("*");
            }
            
            printf("\n");
            
        }
        

        

    end();
    return 0;
}