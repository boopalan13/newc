#include"stdio.h"
#include "additional.h"
int main(){
    start();

        int a=17,binary=0,base=1,i=0,decimal=0;
        long long bi = 10001;
        while(a!=0){
            int rem=a%2;
            binary+=rem*base;
            a/=2;
            base *=10;
            int rem2=bi%10;
            decimal+=rem2*2^i;
            i++;
        }
        printf("binary of a\t : %d\n",binary);
        printf("decimal\t\t : %d\n",decimal);
    end();
    return 0;
}