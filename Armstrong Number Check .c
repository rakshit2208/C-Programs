#include <stdio.h>
main()
{
   int n,c,t,ans=0;
   printf("Enter the number:-");
   scanf("%d",&n);
   c=n;
   while(n!=0)
   {
      t=n%10;
      ans=ans+(t*t*t);
      n=n/10;
   }
   if(c==ans)
   {
      printf("%d is Armstrong Number");
   }
   else
   {
      printf("%d is Not Armstrong Number");
   }
}