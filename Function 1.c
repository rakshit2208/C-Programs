#include<stdio.h>
void add();
void sub();
main()
{
  add();
  sub();
}
void add()
{
  int a,b,c;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("The Addition is = %d",c);
}
void sub()
{
  int a,b,c;
  printf("\nEnter two numbers\n");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("The Subtraction is = %d",c);
}