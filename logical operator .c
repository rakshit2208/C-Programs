#include<stdio.h>
main()
{
  int x, y=5;
  x=y>4&&y<10;
  printf("%d\n",x);
  x=y<4||y>10;
  printf("%d",x);
}
