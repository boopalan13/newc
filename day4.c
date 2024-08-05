#include<stdio.h>

int main(){
    int a=5;
    int *ptr=&a;
    int **ptr1=&ptr;
    printf(" a : %d",**ptr1);    
}