#include <stdio.h>
void Avg(int,int);
main()
{
  int x,y;
  printf("Enter two numbers:-\n");
  scanf("%d%d",&x,&y);
  Avg(x,y);
}
void Avg(int a, int b)
{
  int c;
  c=(a+b)/2;
  printf("Average is =%d",c);

}