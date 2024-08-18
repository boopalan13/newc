#include<stdio.h>
#include<stdlib.h>
void d_b(int number){
	int bi=0,base=1;
	while(number!=0){
		bi+=(number%2)*base;
		number/=2;
		base*=10;
	}printf("%d\n",bi);
}
void b_d(int number){
	int dec=0,base=1;
	while(number!=0){
		dec+=(number%10)*base;
		number/=10;
		base*=2;
	}printf("%d\n",dec);
}
void printArray(const void * array,int type, int size){
	for(int i = 0 ; i < size ;i++){
		if(type==0){
			printf("%d ",((int*)array)[i]);
		}
		else if(type==1){
			printf("%c ",((char*)array)[i]);
		}
		else if(type==2){
			printf("%s\n",((char**)array)[i]);
		}
	}
	printf("\n");
}

void update(int arr[],int index,int newNum){
	*(arr+index)=newNum;
}
void delete(int arr[],int index){
	*(arr+index)=0;
}
void remov(int arr[],int size,int index){
	for(int i=0;i<size-1;i++){
		if(i==index){
			arr[i]=arr[i+1];
			index++;
			if(index==size-1)
				arr[size-1]=0;
		}
	}
}

void toSee(const void* arr,int type, int size,int target){
	char*ch=malloc(size*2*sizeof(char));
	printArray(arr,type,size);
	for(int i=0;i<size*2;i++){
		ch[i]='^';
		if(i==target+target){
			printf("%c",ch[i]);
		}
		else
			printf(" ");
	}
}

int max(int a,int b){
	return a>b ? a:b;
}
int min(int a,int b){
	return a<b ? a:b;
}
int mul(int a,int b){
	return a*b;
}
int diw(int a,int b){
	return a/b;
}
int mod(int a,int b){
	return a%b;
}
void start(){
	printf("\n<-------------- program starts -------------->\n");
}
void println(){
	printf("============================================>>\n");
}
void printsln(){
	printf("-------------------------------------------->>\n");
}
void ar(){
	printf("-> ");
}
void tar(){
	printf("\t-> ");
}
void hd(){
	printf("\n\t");
}
void uhd(){
	printf("====================================\n");
}
void end(){
	printf("\n<-------------- program ended --------------->\n\n");
}

