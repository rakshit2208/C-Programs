#include<stdio.h>
 main()
{
   
  int i,j,num;
    printf("Enter num of rows ");
    scanf("%d",&num);
  
   for(i=num;i>=1;i--)
   { 
     for(j=num;j>=1;j--)
     {
    
       if(j<=i)
       {
         printf(" %d  ",i);
       }
     
       else
       {
         printf("  ");
       }
        
     }
          printf("\n");
   }
        
}  
   
  
  
          