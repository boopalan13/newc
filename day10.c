#include<stdio.h>
#include"additional.h"
#include<string.h>
typedef struct{
    int carID;
    char carModel[15];
    int rentPerDay;
} car;
int main(){
start();

int true=1;
car*cars[10];
cars[0]=&(car){1001,"1001xyz",5000};
cars[1]=&(car){1002,"1002xyz",6000};
cars[2]=&(car){1003,"1003xyz",7000};
cars[3]=&(car){1004,"1004xyz",8000};
cars[4]=&(car){1005,"1005xyz",9000};
cars[5]=&(car){1006,"1006xyz",10000};
cars[6]=&(car){1007,"1007xyz",11000};
cars[7]=&(car){1008,"1008xyz",12000};
cars[8]=&(car){1009,"1009xyz",13000};
cars[9]=&(car){1010,"1010xyz",14000};

while(true){
    int ID,days;
    char c;
    printf("\n");
    printsln();
    printf("CarID starts from 1001 to 1010\n");
    printsln();
    printf("Enter the carID or to quite '0' : " );
    scanf("%d",&ID);
    //printf("Given carID is\t : %d\n",ID);
    if(ID==0)
        true=0;
    else if(  ID>=1001 && ID<=1010){
    for (int i = 0; i < 10; i++)
        {   
            if((cars[i]->carID)==ID){
            printf("carID\t\t : %d\n",cars[i]->carID);
            printf("carModel\t : %s\n",cars[i]->carModel);
            printf("rentPerDay\t : %d\n",cars[i]->rentPerDay);
            printsln();
            printf("you'd like to buy this for rent? y or n : ");
            scanf(" %c",&c);
            if(c=='y'){
                printf("Days you require : ");
                scanf("%d",&days);
                printf("Totalrental cost : %d\n",cars[i]->rentPerDay*days);
                break;
            }
            else
                continue;           
            }
        }
    }
    else
        printf("invalid option.!\n");
    while(getchar()!='\n');
}   
    println();
    printf("This application is exited!\n");
    println();

end();
}
