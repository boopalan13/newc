#include<stdio.h>
void printArray(int arr[],int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void printArrayWithIndex(int arr[],int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++)
        printf("arr[%d]\t : %d\n",i,arr[i]);
    printf("\n");
}

void printcArray(char arr[],int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++)
        printf("%c",arr[i]);
    printf("\n");
}


