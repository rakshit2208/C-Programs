#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
main()
{
  int a,b,c;
  printf("Enter two numbers:-\n");
  scanf("%d%d",&a,&b);
  add(a,b);
  sub(a,b);
  mul(a,b);
  div(a,b);
}
void add(int x, int y)
{
  int c;
  c=x+y;
  printf("The Addition is = %d",c);
}
void sub(int p, int q)
{
  int c;
  c=p-q;
  printf("\nThe Subtraction is = %d",c);
}
void mul(int r, int s)
{
  int c;
  c=r*s;
  printf("\nThe Multiplication  is = %d",c);
}
void div(int t, int u)
{
  int c;
  c=t/u;
  printf("\nThe Division  is = %d",c);
}