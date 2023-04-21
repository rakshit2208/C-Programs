#include<stdio.h>
void main()
{
  int n,k,i;
  printf("Enter any no:-");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
   {
     k=fibonacci(i);
    printf("%d\t",k);
   }
}
int fibonacci(int n)
{
   int k;
   if(n==1||n==0)
   return n;
   else
  k=(fibonacci(n-1)+fibonacci(n-2));
  return (k);

}

