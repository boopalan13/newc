#include"stdio.h"
#include"stdlib.h"
#include "additional.h"
int main(){
    start();
    // int add(int a,int b){return a+b;};
    // int (*sum)(int,int)=add;
    // printf("sum\t : %d\n",sum(5,3));
    // return 0;

    // int compare(const void *a,const void * b){
    //     return (*(int*)a-*(int*)b);
    // }
    
    // int arr[]={2,2,1,4,7,8,2,4,9,3};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // qsort(arr,n,sizeof(int),compare);

    // for (int i = 0; i < n; i++) 
    // {
    //     printf("arr[%d]\t : %d\n",i,arr[i]);
    // }

    void addition(int a,int b){printf("Addition\t : %d\n",a+b);}
    void subtraction(int a,int b){printf("subtraction\t : %d\n",a-b);}
    void multiplication(int a,int b){printf("multiplication\t : %d\n",a*b);}
    void division(int a,int b){printf("Division\t : %d\n",a/b);} 
    void (*fun[])(int ,int)={addition,subtraction,multiplication,division};
    int c;
    //for (int i = 0; i < 4; i++)
    //{   
        printf("\n");
        printf("choose a choice.!\n'0' for addition\n'1' for subtraction\n'2' for multiplication\n'3' for division\n");
        scanf("%d",&c);
        fun[c](5,6);
        while(getchar()!='\n');
    //}

        //     #include <stdio.h>
        // void fp1(int (*ptr)(int))
        // {
        //     int a = 10;
        //     int b = a++;
        //     int c;
        //     printf("%d,", a);
        //     c = ptr(b);
        //     printf("%d\n", c);
        //     printf("fp1 executed\n");
        // }

        // int f1(int x)
        // {
        //     printf("%d,", x);
        //     return(++x);
        //     printf("f1 executed\n");
        // }
        // void main()
        // {
        //     fp1(f1);
        //     getchar();
        // }
    
    return 0;
}