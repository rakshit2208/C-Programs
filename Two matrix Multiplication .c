#include<stdio.h>
main()
{
  int x[2][2],y[2][2],z[2][2];
  int i,j,k,sum;
  printf("Enter elements of 1st matrix:- \n ");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&x[i][j]);
    }
  }
   printf("Enter elements of 2nd matrix:- \n ");
     for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
         {
           scanf("%d",&y[i][j]);
         }
       }
          
 printf("\nMultiplying two matrices...");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            sum = sum + x[i][k] * y[k][j];
            z[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t", z[i][j]);
        printf("\n");
    }
    
}