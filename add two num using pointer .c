#include<stdio.h>
 
int main()
{
   int a,b, *ptr1, *ptr2;
   ptr1=&a;
   ptr2=&b;
   int num;
 
   printf("\nEnter two numbers : ");
   scanf("%d %d",ptr1,ptr2);
 
   num = *ptr1 + *ptr2;
 
   printf("Sum = %d", num);
   return (0);
}
    