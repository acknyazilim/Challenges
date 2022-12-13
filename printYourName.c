// your name surname and age from user
#include <stdio.h>
#include <stdlib.h>

int main()
{
     char name[12];
     char surname[34];
     int age ;
    printf("please enter your name , surname and age\n");
    printf("your name: " );
    gets(name);
    printf("\nsurname: ");
    gets(surname);
    printf("your age: ");
    scanf("%d",&age);
    printf(" YOUR NAME: %s\n",name);
    printf("YOUR SURNAME %s\n",surname);
    printf("YOUR AGE  %d ",age);
    return 0;
}
