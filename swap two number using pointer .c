#include<stdio.h>
main()
{
   int a,b,*p1,*p2, temp;
    p1=&a;
    p2=&b;
    printf("Enter two numbers :-");
    scanf("%d%d", p1,p2);
    printf("Before swapping:-\na=%d\nb=%d\n", a, b);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("Aftet swapping:-\na=%d\nb=%d", *p1,*p2);
}