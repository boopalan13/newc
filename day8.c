#include"stdio.h"
#include"string.h"
#include "additional.h"
int main(){
    start();

        hd();
        printf("1.Array of strings in C\n");
        uhd();

        char str[3][20]={"Hello","from","indonesia"};
        for (int i = 0; i < 3; i++)
        {
            printf("str[%d]\t : %s",i,str[i]);
            printf("\n");
        }
        printsln();
        printf("size of str : %d\n",sizeof(str));
        printf("without pointer leads memory wastage\n");
        printsln();

        hd();
        printf("Array with pointer\n");
        uhd();
        char * str1[]={"Hello","from","australia"};
        for (int i = 0; i < 3; i++)
        {
            printf("str1[%d]\t : %s",i,str1[i]);
            printf("\n");
        }
        printsln();
        printf("size of str : %zu\n",sizeof(str1));
        // strcpy(str1[0],"Hey");

        // for (int i = 0; i < 3; i++)
        // {
        //     printf("str1[%d]\t : %s\n",i,str1[i]);
        // }

    end();
    return 0;
}