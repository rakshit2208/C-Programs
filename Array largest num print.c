#include<stdio.h>
 main()
{
   
  int a[5];
  int i,temp;
  
  printf("Enter 5 numbers\n ");
 
  for(i=0;i<5;i++)
     {
       scanf("\n%d",&a[i]);
     }
  
    for(i=0;i<5;i++)
    {  
       if(a[i]>a[i+1])
        {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp; 
        }
    }
     
  printf("largest number  is = %d",temp);
   
 }    
  
   
  
  
          