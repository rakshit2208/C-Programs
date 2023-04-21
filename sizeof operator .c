#include<stdio.h>
main()
{
  int p,q,r,s;
  p=sizeof(char);
  q=sizeof(int);
  r=sizeof(float);
  s=sizeof(double);
  printf("%d %d %d %d",p, q, r, s);
}
