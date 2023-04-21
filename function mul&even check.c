#include <stdio.h>
void mul(int ,int);
void iseven(int);
void iseven(int);
int main()
{
   int x,y;
   printf("Enter two number\n");
   scanf("%d%d",&x,&y);
   mul(x,y);
   iseven(x);
   iseven(y);
   
}
void mul(int a,int b)
{
    int c;
    c=a*b;
    printf("multiplication is = %d",c);
}
void iseven(int a)
{
   
    if(a%2==0)
    printf("\n%d number is even",a);
    else
     printf("\n%d number is odd",a);
}
void even(int b)
{
   
    if(b%2==0)
    printf("\n%d number is even",b);
    else
     printf("\n%d number is odd",b);
}
        