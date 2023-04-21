#include<stdio.h>
 main()
{
   
  int i,j;
   for(i=1;i<=5;i++)
   { 
       
     for(j=1;j<=5;j++)
     { 
        if(j==1||j==5||i==3)
        {
        printf("@");
        
        }
        else
        printf(" ");
        
     }
        
        printf("\n");
   }
      
       for(i=1;i<=5;i++)
   { 
       
     for(j=1;j<=5;j++)
      { 
        if(j==1||i==1||i==3||i==5)
        {
        printf("$");
        
        }
        else
        printf(" ");
        
      }
        
        printf("\n");
   }
    
       for(i=1;i<=5;i++)
   { 
       
     for(j=1;j<=5;j++)
      { 
        if(j==1||i==5)
        {
        printf("@");
        
        }
        else
        printf(" ");
        
      }
        
        printf("\n");
   }
       for(i=1;i<=5;i++)
   { 
       
     for(j=1;j<=5;j++)
      { 
        if(j==1||i==5)
        {
        printf("#");
        
        }
        else
        printf(" ");
        
      }
        
        printf("\n");
   }
     for(i=1;i<=5;i++)
   { 
       
     for(j=1;j<=5;j++)
      { 
        if(i==1||i==5||j==1||j==5)
        {
        printf("@");
        
        }
        else
        printf(" ");
        
      }
        
        printf("\n");
   }
}