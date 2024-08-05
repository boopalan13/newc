#include"stdio.h"
#include"conio.h"
#include "additional.h"
int main(){
    start();
    int w=5,x=6,y,z;
    const int a=5,b=10;
    char ch[20],str[30];
    int *ptr=&a;
    *ptr=6; 
    const int*bptr=&b;
    

    hd();
    printf("The pointer concept..\n");
    uhd();
    
    printf("a value\t\t : %d\n",a);
    printf("a address\t : %p\n",&a);
    printf("ptr (a value)\t : %d\n",*ptr);
    printf("a address\t : %p\n",ptr);
    printf("b value\t\t : %d\n",b);
    printf("bptr value\t : %d\n",*bptr);
    printf("b address\t : %d\n",&b);
    printf("bptr address\t : %d\n",bptr);

    hd();
    printf("The Scansets in c..\n");
    uhd();

    printf("Give a string\t\t : ");
    scanf("%[A-Z]s",&ch); //first caps/small sequence wil store in this variable
    //scanf("%[^o]s",&ch); if input is lmnopq.. output will be lmn
    //scanf("%[^\n]s",&ch); its reading everything untill the nextline
    printf("Given first caps is\t : %s\n",ch);
    printsln();

    sprintf(str,"w=%d and x=%d now in string",w,x);
    printf("%s\n",str);
    sscanf(str,"w=%d and x=%d\n",&y,&z);
    printf("y=%d and z=%d\t\n",y,z);
    printsln();

    printf("Enter a character\t : ");
    char ab=getch();      //after giving a character it will exit from the cmd (dont display the output)
    printf("\nab\t\t : %c\n",ab);
    printsln();
    printf("Enter a character\t : ");
    getche();             //reads the character and displays immediatly
    //getchar() used to reads all character given by the user but takes one character only
    printf("\n");
    putchar(ab);    //immediately displays the character
    printf("\n");
    printsln();

    // char text[30];
    // printf("Enter the string : ");
    // gets(text);
    // printf("Entered text is : %s\n",text);  //usually gets() is dangerous ,and should not be used
    puts(str);              //to display the string
    //putch()               displays the character
    println();

    hd();
    printf("Callback function in C\n");
    uhd();
    printf("\n");
    

end();
return 0;
}