#include<stdio.h>
 main()
{
   
  int i,j,k;
  int space=10;

   for(i=1;i<=10;i++)
   { 
     for(j=1;j<space;j++)
     {
       printf(" ");
     }
        
        for(k=1;k<=i;k++)
        {
           printf("* ");
        
      
        }
  
          printf("\n");
          space--;
        }
        
  
}     
  
  
          