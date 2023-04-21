#include<stdio.h>
 main()
{
   
  int i,j, num;
   printf("Enter num of rows ");
   scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    for(j=1;j<=i;j++)
     {
     printf("%d",j);
     }
     printf("\n");
   }
 }   
  