#include<stdio.h>
#include<limits.h> //datatypes value range utilities
#include<float.h>


int main(){
    //simple getting array values 
    int a,b=5;
    int arr[3];
    printf("\tSimple array concept..\n");
    printf("\t=====================\n");
    printf("-> Enter numbers : ");
    for(int i=0;i<3;++i){
        scanf("%d",&arr[i]);
        
    };
    printf("-> Entered intArray : ");
    for(int j=0;j<3;++j){
        printf("%d ",arr[j]);
    };
    printf("\n-> arr[1] : %d\n",arr[1]);
    
    //Sort an array 
    printf("\n\n\tSort an array..\n");
    printf("\t=====================\n");
    int intArray[10]={34,12,4,45,65,76,7,8,8,-21};
    int n=sizeof(intArray)/sizeof(intArray[0]);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(intArray[i]<intArray[j]){
                int temp=intArray[i];
                intArray[i]=intArray[j];
                intArray[j]=temp;
            }
        }
    }
    printf("-> Sorted Array : ");
    for(int i=0;i<n;++i){
        printf("%d ",intArray[i]);
    }printf("\n");
    
    //value range of datatypes
    printf("\n\n\tLimits utilities..\n");
    printf("\t=====================\n");
    printf("-> Range of char            : from %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("-> Range of unsigned char   : from 0 to %u\n", UCHAR_MAX);
    printf("-> Range of short           : from %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("-> Range of int             : from %d to %d\n",INT_MIN,INT_MAX);
    printf("-> Range of unsigned int    : from 0 to %u\n",UINT_MAX);
    printf("-> Range of long            : from %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("-> Range of unsigned long   : from 0 to %lu\n",ULONG_MAX);
    printf("-> Range of float           : from %e to %e\n",FLT_MIN,FLT_MAX);



    //change the index value
    printf("\n\n\tupdating an Array..\n");
    printf("\t=====================\n");
    int index=4;
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    int y[10];
    printf("-> at index %d : ",index);
    for(int i=0;i<10;++i){
        if(index==i)
            y[i]=99;
        else{
            y[i]=x[i];
    }
    printf("%d ",y[i]);
    
    }
    
    //Duplicate numbers
    printf("\n\n\tDuplicate numbers..\n");
    printf("\t=====================\n");
    int e=1,f=3,g=1;
    if(e==f||f==g||g==e)
        printf("-> same value was used");
    else
        printf("-> same value was not used");
        
    //Storage classes
    printf("\n\n\tStorage classes..\n");
    printf("\t=====================\n");
    
    
}

    