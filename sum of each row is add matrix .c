#include<stdio.h>
main()
{
  int i,j,c,r, sum=0;
  printf("Enter no of rows\n");
  scanf("%d",&r);
  printf("Enter no of columns\n");
  scanf("%d",&c);
  int a[r][c];
  printf("Enter value for matrix A\n");
  for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
      {
      scanf("%d",&a[i][j]);
      }
   }
   printf("The matrix A is\n");
     for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
          {
           printf("%d ",a[i][j]);
          }
           printf("\n");
      }
    
   
    printf("The sum of row is\n");
     for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
          {
            sum=sum+a[i][j];
          }
          
           printf("%d ",sum);
           sum=0;
      }    
}  