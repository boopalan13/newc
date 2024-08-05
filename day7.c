#include"stdio.h"
#include "additional.h"

int arrFun(int arr[],int n);
int main(){
start();

    hd();
    printf("1.The Arrays in C..\n");
    uhd();
    int arr[5]={1,2,3,4,5};
    int count =sizeof(arr)/sizeof(arr[0]);

    hd();
    printf("1.1Print an array..\n");
    uhd();
    for (int i = 0; i < count; i++)
    {
        printf("arr[%d]\t:%d\n",i,arr[i]);
    }
    printsln();
    // for (int i=count;0>=count; i--)
    // {   
    //     printf("arr[%d]\t:%d\n",i,arr[i]);
    // }
    printf("Size of an arr : %d\n",count);

    hd();
    printf("1.2Reverse an array..\n");
    uhd();
    for (int i = count-1; i >= 0; i--)
    {                         
        printf("arr[%d]\t:%d\n",i,arr[i]);
    }
    printsln();
    arrFun(arr,5);

    hd();
    printf("1.4Character array..\n");
    uhd();
    char charArr[]={'a','p','p','l','e'};
    for (int i = 0; i < count; i++)
    {
        printf("charArr[%d]\t:%c\n",i,charArr[i]);
    }
    printsln();

    hd();
    printf("1.5User input array\n");
    uhd();  
    int n,userArr[n];
    printf("Give size of an integer array : ");
    scanf("%d",&n);
    printf("Enter an integer array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",*(userArr+i));
        printf("userArray[%d]\t\t\t : %d\n",i,*(userArr+i));
    }
    printsln();

    hd();
    printf("1.6Two dimensional array\n");
    uhd();
    int twoDarray[2][3];
    printf("Give [2][3] datas :");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {           
            scanf("%d",&twoDarray[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",twoDarray[i][j]);
        }
        printf("\n");
    }

    hd();
    printf("3 dimensional array..\n");
    uhd();
    int ThreeDArray[3][3][3];
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                ThreeDArray[i][j][k]=i,j,k;
                printf("ThreeDArray[%d][%d][%d] : %d\n",i,j,k,*(*(*(ThreeDArray+i)+j)+k));
            }
            
        }
        printf("\n");
    }

    hd();
    printf("3.1 user input 3D array in c\n");
    uhd();

    int i,j,k,ThreeDarr[i][j][k];

    printf("How many 2 dimensional do you want\t\t : ");
    scanf("%d",&i);
    printf("How many rows you want to create a 2d array\t : ");
    scanf("%d",&j);
    printf("How many columns you need to create a 2d array\t : ");
    scanf("%d",&k); 
    printsln();
    for (int l = 0; l < i; l++)
    {
        for (int m = 0; m < j; m++)
        {
            for (int n = 0; n < k; n++)
            {
                ThreeDarr[l][m][n]=l+m+n;
                printf("3dArray[%d][%d][%d] : %d\n",l,m,n,ThreeDarr[l][m][n]);
            }
            
        }
        printf("\n");
    }
    
    

    
end();
return 0;
}

//outer function (Global)
int arrFun(int arr[],int n){
    hd();
    printf("1.3Array functioni n c..\n");
    uhd();
    printf("Given array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]\t:%d\n",i,arr[i]);
    }
    printsln();
}