#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("Enter 1st no:-");
    scanf("%d",&a);
    printf("Enter 2nd no:-");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("Addition is = %d\n",c);
    printf("Substraction is = %d\n",d);
    printf("Multiplication is = %d\n",e);
    printf("Division is = %d\n",f);
    return 0;
}