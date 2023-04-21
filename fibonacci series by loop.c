#include<stdio.h>
main()
{
   
  int i,n,a=0,b=1,temp;
  printf("Enter any no:-");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
     printf("%d\n",a);
     temp=a+b;
     a=b;
     b=temp;
   }
  
}