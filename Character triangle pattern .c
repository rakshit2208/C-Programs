#include<stdio.h>
 main()
{
   
  int i,j,n;
  printf("Enter any number:-");
  scanf("%d",&n);
  char ch;
  for(i=1;i<=n;i++)
   {
      ch='A';
       for(j=1;j<=i;j++)
       {
        printf("%c",ch++);    
       }
       printf("\n");  
    }
}       
  
   
  
  
          