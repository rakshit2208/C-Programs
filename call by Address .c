#include<stdio.h>
main()
{
  int a,b;
  printf("Enter two numbers:-");
  scanf("%d%d",&a,&b);
  printf("a=%d\nb=%d",a,b);
  swap(&a,&b);
}
int swap(int *x, int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
  printf("\nAfter swapping:-\na=%d\nb=%d",*x,*y);
}
   
  
          