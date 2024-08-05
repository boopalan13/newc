#include"stdio.h"
#include "additional.h"
int main(){
    start();
        //problem 1
        printf("1.Program to find sum of elements in a given array\n");
        printsln();
        int s1;
        int prob1[s1],sum1,sum2,sum3=0;
        printf("Giv size of array to sum : ");
        scanf("%d",&s1);
        printf("Giv integer array to sum : ");
        for (int i = 0; i < s1; i++)
        {
            scanf("%d",&prob1[i]);
        }
        
        //int s1=sizeof(prob1)/sizeof(prob1[0]);
        for (int i = 0; i < s1; i++)
        {
            sum1+=prob1[i];
        }
        printf("sum of prob1 array\t : %d\n",sum1);
        printsln();



        //problem 2
        printf("2.Program to find sum of elements in a given 2D array\n");
        printsln();
        int prb2[2][2];
        printf("Give a 2x2 array to sum  : ");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {   
                scanf("%d",*(prb2+i)+j);
                sum2+= *(*(prb2+i)+j);
                printf("prb2[%d][%d]\t\t : %d\n",i,j,*(*(prb2+i)+j));
            }
            
        }
        ar();
        printf("sum of prb2 array\t : %d\n",sum2);
        printsln();
        



        //problem 3  //unfortunately this can't work on 1
        printf("3.Find the sum of non-prime elements in the given array\n");
        printsln();
        

        int arr[6]={1,3,7,4,9,8};
        

            for (int l = 1; l < 6; l++)
            {               
                    for (int m = 0; m < arr[l]/2; m++)
                    {
                        if(arr[l]==2) 
                            continue;
                        else if ((arr[l]%(m+2)==0))
                        {                               
                            printf("arr[%d] : %d\n",l,arr[l]);
                            sum3+=arr[l];
                            break;
                        }                       
                    }                                  
            }       
        printf("sum is : %d\n",sum3);
    
    end();
    return 0;
}