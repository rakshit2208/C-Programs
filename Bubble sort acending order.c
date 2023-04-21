#include <stdio.h>
int main()
{
 int i,j,temp,n;
 printf("How many do you want to number\n");
 scanf("%d",&n);
  int a[n];
 printf("Enter %d numbers\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 for(j=0;j<=n-1;j++)
  for(i=0;i<=n-1-j;i++)
    if(a[i]>a[i+1])
     {
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
     }
    printf("The acending order is - ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1)
        printf("<");
    }
    return 0;
}