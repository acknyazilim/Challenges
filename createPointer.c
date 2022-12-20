// create a pointer
#include <stdio.h>
#include <stdlib.h>

void multiply(int *n,int *m,int *k)
{
    *n=*m**k;
}

int main()

{
    int a,b,c;
 a=34;
 b=2;
multiply(&c,&a,&b);
printf("%d",c);

    return 0;
}
