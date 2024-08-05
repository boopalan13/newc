#include<stdio.h>
int main(){
    int a,result=0,base=1;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a){
        if(a>=1 && a<=100){
            while(a!=0){
            int rem=a%2;
            result=result+rem*base;
            a/=2;
            base*=10;
        }printf("a : %d\n",result);
        }
    }
}