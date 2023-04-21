#include<stdio.h>
void main()
{
  int a[]={5,10,34,76,87};
  linear_search(a,5,100);
}
void linear_search(int a[],int N, int item)
{
  int i,flage=1;
  for(i=0;i<=N-1;i++)
  {
     if(a[i]==item)
     {
      flage=0;
      printf("search successful");
     }
  }
 if(flage==1)
printf("search unsuccessful");
}








