#include<stdio.h>
 main()
{
   
  int i,j;

   for(i=1;i<=10;i++)
   {
      for(j=1;j<=30;j++)
      {
       if(i==1||i==10||j==1||j==30)
       printf("@");
     
       else
       printf(" ");
      }
       printf("\n");
  }
}       
  
   
  
  
          