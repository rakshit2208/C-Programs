#include<stdio.h>
 main()
{
  int a[5];
  int i,n,ser,count=0;
  printf("How many numbers you want to\n");
  scanf("%d",&n);
  printf("Enter %d numbers\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
   
   printf("Enter any number search to\n ");
   scanf("%d", &ser);
   for(i=0;i<n;i++)
    {
      if(a[i]==ser)
      {
        printf("Number Found\n");
        break;
      }
        count++;
    }
      if(count==n)
      printf("Number Not Found ");
 }   