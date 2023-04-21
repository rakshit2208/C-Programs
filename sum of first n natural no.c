#include<stdio.h>
main()
{
  int i,n, sum=0;
  printf("Enter any integer number:-");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum=sum+i; 
  }
 printf("sum of first %d natural number is=%d", n, sum);
}