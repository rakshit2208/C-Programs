#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c, s = 0;
    printf("Enter a number:\t");
    scanf("%d",&a);
    c = a;
   while(a > 0)
   {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
   }

   if(s == c)
   {
      printf("The number %d is a palindrome.", c);
   }
   else
   {
      printf("The number %d is not a palindrome.", c);
   }
      return 0;
}
    