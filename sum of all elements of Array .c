#include <stdio.h>
int main()
{
  int i,n, sum=0;
  printf("Enter no size of in array:-");
  scanf("%d",&n);
  
  printf("Enter %d  elements in array:-\n ",n);
  int a[n];
  for(i=0;i<n;i++)
  {
     printf("Enter %d elements:-",i);
     scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
     sum=sum+a[i];
  }
    printf("Sum of all elements stored in the array is = %d\n", sum); 
  
}