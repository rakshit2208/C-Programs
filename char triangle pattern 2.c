#include<stdio.h>
 main()
{
   
  int i,j,n;
  printf("Enter any number:-");
  scanf("%d",&n);
  char ch='A';
  for(i=1;i<=n;i++)
   {
     
       for(j=1;j<=i;j++)
       {
        printf("%c",ch);    
       }
        ch++;
       printf("\n");  
    }
}       
  
   
  
  
          