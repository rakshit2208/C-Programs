#include <stdio.h>

int main()
{
  int n,i;
  int arr[100];
  printf("Enter the number of elements:-");
  scanf("%d",&n);

  for (i=0;i<n;i++)
  {
    printf("Enter %d number:- ",i+1);
    scanf("%d", &arr[i]);
  }
  for (i=1;i<n;i++)
   {
    if (arr[0]<arr[i])
     {
      arr[0]=arr[i];
     }
   }

  printf("Largest element is = %d", arr[0]);

  return 0;
}
