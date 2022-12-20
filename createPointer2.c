// create a pointer
//Pointer uses number and address of number

#include <stdio.h>
#include <stdlib.h>
int factorial(int *mynumber)
{
    int i;
    int mul=1;
    for(i=1;i<=*mynumber;i++)
    {
       mul=mul*i;
    }
    return mul;

}

int main()
{
    printf("please enter a number  \n");
    int number;
    int value;
    scanf("%d",&number);
    value=factorial(&number);
    printf("factorial calculation of this number: %d",value);
    return 0;
}
// İNPUT 5
// OUTPUT 120
