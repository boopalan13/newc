#include<stdio.h>
#include<string.h >
typedef struct {
    char name[20];
    int age;
}student;

int main(){
    student *raj[5];
    student a={"ragul",21};
    student b={"sathish",20};
    raj[0]=&a;
    printf("raj[0]->name\t : %s\n",raj[0]->name);
    
    
}