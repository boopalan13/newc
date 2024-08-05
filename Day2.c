#include <stdio.h>
//1.constant using const
//2.constant using macros
#define a 10
int b=2;
int c=3;
enum days {monday=2,tuesday,wednesday,thursday,friday,saturday,sunday};
void add(){
    printf("sum of b and c : %d\n",b+c);
}
int main()
{   
    int i,j;
    printf("Hello World\n");
    //3.constant using pointer
    const int *ptr=&i;
    printf("i : %d\n",i);
    printf("a : %d\n",a);
    
    #ifdef a
    #undef a 
    
    #define a 5
    printf("a : %d\n",a);
    #endif
    enum days day=6;
    //day=tuesday;
    printf("monday : %d\n",day);
    
    //to check global variable is accessible from global scope
    printf("b : %d\n",b);
    
    {   
        printf("b : %d\n",b);
        {
            printf("c : %d\n\a",c);
        }
        
    }
    
    add();
    printf("My mobile number "
           "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a\n");
           
    char e=135;
    printf("e : %d\n",e);
    char f[]="abcdefGHIJKLmnop";
    printf("%20s\n",f);
    //Scansets
    char g[127];
    printf("Enter a string : ");
    scanf("%127[A-Za-z]",g);
    printf("caps of g string : ",g);
    
    
    return 0;
}