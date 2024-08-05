#include"stdio.h"
#include"math.h"
#include "additional.h"

void fun(){printf("Call from fun..\n");}
void func(void (*ptr)()){ (*ptr)();}
//_Noreturn int funct(){return 10;} //->NRF if we run this program wont work after this call of function
int main(){
start();

    

    hd();
    printf("1.Callback function in c..\n");
    uhd();
    void (*ptr)()=&fun;
    ar();
    func(ptr);
    println();

    hd();
    printf("2.Nested function in c..\n");  //usually nested function not support in c (while gcc can allow it with auto keyword)
    uhd();

    int foo(){printf("Call from inside function foo\n");}  //declare the function with auto function_Name()
    ar();
    foo();
    println();

    hd();
    printf("3.No return function..\n");
    uhd();
    //see NRF6

    hd();
    printf("4.Predefined Identifier func\n");
    uhd();
    ar();
    printf("%s\n",__func__);
    ar();
    printf("%s\n",__FILE__);
    ar();
    printf("%d\n",__LINE__);
    println();

    hd();
    printf("Math.h Functions..\n");
    uhd();  
    
    float val1=1.123,val2=1.9,val3=-1.1,val4=-1.9,integral,fractional;
    printf("val1\t\t:%.1f\n",ceil(val1));
    printf("val2\t\t:%.1f\n",ceil(val2));
    printf("val3\t\t:%.1f\n",ceil(val3));
    printf("val4\t\t:%.1f\n",ceil(val4));
    printsln();
    printf("val1\t\t:%.1f\n",floor(val1));
    printf("val2\t\t:%.1f\n",floor(val2));
    printf("val3\t\t:%.1f\n",floor(val3));
    printf("val4\t\t:%.1f\n",floor(val4));
    printsln();
    fractional=modf(val1,&integral);
    printf("integral\t:%f\n",integral);
    printf("fractional\t:%f\n",fractional);
    //fabs() for only positive value even though negative
    //fmod() --> %
    //sqrt()
    //exp()
    //cos()
    //acos()




end();
return 0;
}