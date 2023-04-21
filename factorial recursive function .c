#include<stdio.h>
main()
{
  int n,i;
  printf("Enter any number:-");
  scanf("%d",&n);
  i=factorial(n);
  printf("The given number of factorial= %d", i);
}
int factorial(int n)
{
   if(n==0)
   return 1;
   else
   return n*factorial(n-1);

}
        