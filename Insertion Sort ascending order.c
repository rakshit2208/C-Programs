#include<stdio.h>
main()
{
  int i,j,n,temp,min;
  printf("Enter no of Elements are:");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    printf("Enter %d Elements:",i);
    scanf("%d",&a[i]);
  }
      for(i=1;i<n;i++)
        {
          min=a[i];
          j=i-1;
         while(j>=0&&a[j]>min)
           {
             a[j+1]=a[j];
             j--;
           }
            a[j+1]=min;
         }
 printf("After insertion sort elements are:\n");
     for(i=0;i<n;i++)
       {
         printf("%d", a[i]);
         if(i<n-1)
        printf("<");

        } 
}
    