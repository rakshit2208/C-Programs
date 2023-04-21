#include<stdio.h>
main()
{
  int a,b;
  printf("Enter two numbers -");
  scanf("%d%d",&a,&b);
  swap(a,b);
}
int swap(int x, int y)
{
   int temp;
   temp=x;
   x=y;
   y=temp;
  printf("after swapping a=%d\tb=%d",x,y);
}
   
  
          