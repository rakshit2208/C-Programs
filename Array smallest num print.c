#include<stdio.h>
main()
{
   
  int a[7];
  int i,temp;
  
  printf("Enter 7 numbers\n ");
 
  for(i=0;i<7;i++)
     {
       scanf("\n%d",&a[i]);
     }
  
    for(i=0;i<7;i++)
    {  
       if(a[i]<a[i+1])
        {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp; 
        }
    }
     
  printf("smallest  number  is = %d",temp);
   
 }    
  
   
  
  
          