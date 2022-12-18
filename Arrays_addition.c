//CLASSİC 3x3 ARRAY SUM

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("please enter size of  arrays.\n");
    int n;
    scanf("%d",&n);
     int arr1[n][n], arr2[n][n];
     printf("please enter the elements of the first array\n");
     printf("--------------------------------\n");
     int i,j;
     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
                   printf("Enter arr1[%d][%d]: ",i,j);
                   scanf("%d",&arr1[i][j]);
           }



     }
      printf("--------------------------------\n");
      printf("please enter the elements of the second array\n");
     printf("--------------------------------\n");

     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
                   printf("Enter arr2[%d][%d]: ",i,j);
                   scanf("%d",&arr2[i][j]);
           }

     }
      printf("--------------------------------\n");

     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
                   printf(" arr1[%d][%d]:%d \n ",i,j,arr1[i][j] );

           }

     }
           printf("--------------------------------\n");

     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
                   printf(" arr2[%d][%d]:%d \n",i,j,arr2[i][j] );

           }

     }
             printf("--------------------------------\n");
             printf("Addition of two arrays is:\n");
              printf("--------------------------------\n");

     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
                   printf("%4d ",arr2[i][j]+ arr1[i][j]);

           }
           printf("\n");
            printf("\n");
             printf("\n");

     }
     return 0;
}
