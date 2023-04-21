#include<stdio.h>
main()
{
  int a,b,c;
  printf("Enter two numbers:-");
  scanf("%d%d",&a,&b);
  c=gcd(a,b);
  printf("gcd=%d",c);
}
int gcd(int a,int b)
{ 
  if(a==0)
  return b;
  else if(b==0)
  return a;
  else
  return gcd(b,a%b);
}
  
        