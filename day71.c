#include"stdio.h"
#include"string.h"
#include "additional.h"
int main(){
start();

    hd();
    printf("1.String Manipulations in C\n");
    uhd();

    char str[200],str2[200]="from str2";
    printf("Introduce yourself\t : ");
    fgets(str,sizeof(str),stdin);
    printf("Entered text is\t\t : %s\n",str);
    printf("size of str : %d\n",sizeof(str));
    puts(str2);
    printf("\n");
    strcpy(str,str2);
    printf("strcpy\t\t\t : %s\n",str2);
    printf("strlen(str)\t\t : %d\n",strlen(str));
    printf("string address\t\t : %p\n",str);

    

end();
return 0;
}