#include<stdio.h>
main()
{
  int a=5;
  int *b;
  b=&a;
  printf("Address of a= %u\n",&a);
  printf("Address of a= %u\n",b);
  printf("Address of b= %u\n",&b);
  printf("Value of b= %u\n",b);
  printf("Value of a= %d\n",a);
  printf("Value of a= %d\n",*(&a));
  printf("Value of a= %d\n",*b);
}
        