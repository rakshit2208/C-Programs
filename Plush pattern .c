#include<stdio.h>
 main()
{
   
  int i,j;
   for(i=1;i<=9;i++)
   { 
       
     for(j=1;j<=9;j++)
     { 
        if(j==5||i==5)
        {
        printf("+");
        
        }
        else
        printf(" ");
     }
        printf("\n");
   }    
 }