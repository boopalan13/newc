#include <stdio.h>
#include <string.h>
#include "mylib.h"
#include <stdlib.h>
#define MIN_NAME_LENGTH 3
void updatedBerths(int upper,int lower){
    printf("\n\t\tUpdated Berths\n");
    printf("Available upper Berth(s) : %d\n",upper);
    printf("Available lower Berth(s) : %d\n",lower);
}
void availableBerths(int*upper,int*lower){
    printf("Available upper Berth(s) : %d\n",*upper=rand()%6);
    printf("Available lower Berth(s) : %d\n",*lower=rand()%6);
}
void validPlace(char*name){
    askPlace:{
        printf("\nWhere's the place you board from : ");
        scanf("%s",name);
    }
    if(!(strlen(name)>=MIN_NAME_LENGTH))
    {
        printf("Given place is too short!\nPlace* should be atleast %d characters\n",MIN_NAME_LENGTH);
        goto askPlace;
    }
    for(int i=0;i<strlen(name);i++){
        if(name[i]>='0' && name[i]<='9'){
            printf("Place should not contain numeric(s)!\n");
            goto askPlace;
        }
    }
}
void ValidName(char*name,int i){
    askName: 
    {
        printf("\nEnter the %dth person name\t : ",i);
        scanf("%s",name);
    }
    if(!(strlen(name)>=3)){
        printf("Given name is too short!\nName* should be atleast %d characters\n",MIN_NAME_LENGTH);
        goto askName;
    }
    for(int i=0;i<strlen(name);i++){
        if(name[i]>='0' && name[i]<='9'){
            printf("Name should not contain numeric(s)!\n");
            goto askName;
        }
    }
}

void validAge(int*age,int i){
    askAge:{
        printf("Enter the %th person age \t : ",i);
        scanf("%d",age);
        getchar();
    }
    if(*age<=17 || *age>=100){
        printf("You're not eligible to book a ticket\n");
        goto askAge;
    }
    
}


void availableTrains(char*source ,char*destination){
    char*trains[]={"Madurai Tejas Express \t-> departs at 6:00 AM",
    "Cholan Super Fast \t-> departs at 7:45 AM",
    "Guruvayur Express \t-> departs at 9:45 AM",
    "Vaigai Super Fast \t-> departs at 1:50 PM",
    "Pallavan Super Fast \t-> departs at 3:45 PM"};
    if((strcmp(source,"chennai")==0 || strcmp(source,"tambaram")==0) && (strcmp(destination,"trichy")==0 || strcmp(destination,"madurai")==0)){
        printArray(trains,2,5);
    }
}
typedef struct{
    int age;
    char name[15];
    char gender[6];
}data;
int main(){
    printf("\n\t\t*WELCOME TO TRAIN TICKET BOOKING SYSTEM*\n\n");
    int nPassangers,upperBerth,lowerBerth,choosBerth,amount;
    char source[10],destination[10];
    while(1){
        printf("Enter the number of passangers or 0 to exit : ");
        scanf("%d",&nPassangers);
        getchar();
        switch(nPassangers){
            case 0: {
                printf("Thank You For using me!\n");
                return 0;
            }
            case 5 ... 6:{
                printf("Sorry! A Person can book 4 tickets only!\n");
                break;
            }
            case 1 ... 4:{
                data passangersData[nPassangers];
                for(int i=1;i<=nPassangers;i++){
                    //printf("\nEnter the %dth person name\t : ",i);
                    ValidName(passangersData[i].name,i);
                    getchar();
                    //printf("Enter the %dth person age\t : ",i);
                    //scanf("%d",&passangersData[i].age);
                    validAge(&passangersData[i].age,i);
                    //getchar();
                    printf("Enter the %dth person gender\t : ",i);
                    scanf("%s",passangersData[i].gender);
                    getchar();
                    //printf("\n");
                }
                printf("\n\nCheck your Details!\n");
                for(int i=1;i<=nPassangers;i++){
                    printf("%dth person name \t: %s\n",i,passangersData[i].name);
                    printf("%dth person age\t \t: %d\n",i,passangersData[i].age);
                    printf("%dth person gender \t: %s\n",i,passangersData[i].gender);
                }
                
                    //printf("\nWhere's the place you board from : ");
                    validPlace(source);
                    printf("Where would you like to go\t : ");
                    //validPlace(destination);
                    scanf("%s",destination);
                    
                    if((strcmp(source,"chennai")==0 || strcmp(source,"tambaram")==0) && (strcmp(destination,"trichy")==0 || strcmp(destination,"madurai")==0)){
                        printf("\nAvailable trains from %s to %s are..\n\n",source,destination);
                    
                        availableTrains(source,destination);
                        availableBerths(&upperBerth,&lowerBerth);
                        printf("\n");
                        
                        if(upperBerth==0){
                            printf("Upper Berths are already occupied!\n");
                        }
                        if(lowerBerth==0){
                            printf("Lower Berths are already occupied!\n");
                        }
                        else{
                                printf("\t\tChoose Berths!\n");
                                askBerth:{
                                    printf("For Upper Berth press '1' For Lower Berth press '2' : ");
                                    scanf("%d",&choosBerth);
                                    //getchar();
                                }
                                if(choosBerth==1){
                                    upperBerth-=1*nPassangers;
                                }
                                else if(choosBerth==2)
                                    lowerBerth-=1*nPassangers;
                                else{
                                    printf("Not a valid option!\n");
                                    goto askBerth;
                                }
                        }
                        if(upperBerth && lowerBerth !=0){
                            updatedBerths(upperBerth,lowerBerth);
                        }
                        int berthAmount=500*nPassangers;
                        printf("\n\t\t*Payment Page!\n");
                        askAmount:{
                            printf("you need to pay Rs.%d\n",berthAmount);
                            printf("Enter the amount : ");
                            scanf("%d",&amount);
                            
                        }
                        if(amount==berthAmount){
                            printf("You have successfully booked %d ticket(s)\n",nPassangers);
                            berthAmount=500*nPassangers;
                        }
                        else if(amount<berthAmount){
                            printf("unpaid amount Rs.%d\nNow ",berthAmount-amount);
                            berthAmount-=amount;
                            goto askAmount;
                        }
                        else if(amount>berthAmount){
                            printf("Please take the remaining amount Rs.%d\n",abs(berthAmount-amount));
                            printf("You have successfully booked %d ticket(s)\n",nPassangers);
                            berthAmount=500*nPassangers;
                        }
                    }
                    
                    else{
                        printf("There is no train between %s and %s!\n",source,destination);
                    }
                    
                    
                    
                break;                            
            }
            default : printf("Not a valid option!\n");
            break;
        }
    }
}
