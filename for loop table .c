#include<stdio.h>
 main()
{
   
  int i,n;
  printf("Enter any number for table");
  scanf("%d",&n);

  for(i=1;i<=10;i++)
  printf("%d* %d= %d\n",n,i,i*n);
}