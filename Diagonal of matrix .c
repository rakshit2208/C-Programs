#include<stdio.h>
main()
{
  int i,j,r,c;
  printf("Enter the value of r and c for matrix:-\n");
  scanf("%d%d",&r,&c);
  int a[r][c];
  printf("Enter the values for matrix A:-");
  for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
      scanf("%d",&a[i][j]);
     }
   }
   printf("The diagonal elements of the matrix are:-\n");
   for(i=0;i<r;i++)
     {
       for(j=0;j<c;j++)
        {
          if(i==j)
          printf("%d",a[i][j]);
          else
          printf("\t");
        }
           printf("\n");
     }
}