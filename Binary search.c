#include<stdio.h>
main()
{
  int i,n,search,f,l,m,flag=0;
  printf("Enter no of elements in an array\n");
  scanf("%d",&n);
  int array[n];
  printf("Enter %d value in ascending order\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&array[i]);
  printf("Enter the value to be search : ");
  scanf("%d",&search);
  /* Binary Search  logic */
  f=0;l=n-1;
  while(f<=l)
  {
  m=(f+l)/2;
  if(search==array[m])
  {
  flag=0;
  break;
  }
  else  if(search<array[m])
  l=m-1;
  else
  f=m+1;
  }
  if(flag==1)
  printf("%d value is not found\n",search);
  else
  printf("%d value is found at %d position\n", search,m);
}

