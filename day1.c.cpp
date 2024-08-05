#include<stdio.h>
#include<string.h>
#pragma pack(1)
struct sizeOfFunction{
    int a,c;
    double b;
    char name[1];
};

struct Student{
    int age;
    char name[10];
};

void printStudent(struct Student *array,int size){
    for(int i=0;i<size;i++){
        printf("index at %d : Age=%d, Name=%s\n",i,array[i].age,array[i].name);
    }
}
int main(){
    printf("-> size of the packed structure : %zu\n", sizeof(struct sizeOfFunction));
    struct Student myArray[]={{1,"Akash"},{2,"Boopalan"}};
    printf("-> Age = %d\t Name= %s \n",myArray[0].age,myArray[1].name);
    printStudent(myArray,2)


