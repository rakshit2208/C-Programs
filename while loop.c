#include<stdio.h>
 main()
{
   
  int i,n;
  printf("Enter any no for table");
  scanf("%d",&n);
  i=1;

  while(i<=10)
 { printf("%d*%d= %d\n",n,i,i*n);
   i++;
}
}