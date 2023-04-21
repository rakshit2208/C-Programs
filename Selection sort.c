#include <stdio.h>
int main()
{
    int i,j,temp,n;
    printf("Enter how many do you want to numbers :-");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d elments :",i);
        scanf("%d",&arr[i]);
    }
         for(i=0;i<n-1;i++)
          {
              for(j=i+1;j<n;j++)
              {
                 if(arr[i]>arr[j]) 
                 {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;  
                 }
                  
              }
          }
                 printf("After selection sort elements are :- ");
                  for(i=0;i<n;i++)
                  {
                     printf("%d ",arr[i]); 
                     
                  }
        
          
              return 0;
    
}