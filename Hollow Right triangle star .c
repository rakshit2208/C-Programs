#include<stdio.h>
 main()
{
   
  int i,j,k;
   for(i=1;i<=5;i++)
   { 
       
     for(j=1;j<=i;j++)
     { 
        if(j==1||j==i||i==6-1)
        {
        printf("*");
        
        }
        else
        printf(" ");
        
     }
        
        printf("\n");
   }
 }      
          