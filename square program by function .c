#include<stdio.h>
main()
{
  int a,b;
  printf("Enter any number :-");
  scanf("%d",&a);
  b=square(a);
  printf("The square is = %d", b);
}
int square (int x)
{
   int y;
   y=x*x;
  return (y);
}
   
  
          