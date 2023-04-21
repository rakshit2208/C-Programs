#include<stdio.h>

main()
{
  int a,b,c,n;
printf("Enter the value of a & b");
scanf("%d%d",&a,&b);
printf("press 1 for Add\n");
printf("press 2 for Sub\n");
printf("press 3 for Mul\n");
printf("press 4 for Div\n");
scanf("%d",&n);
switch(n)
{
case 1:c=a+b;
printf("\n Add=%d",c);
break;
case 2:c=a-b;
printf("\n Sub=%d",c);
break;
case 3:c=a*b;
printf("\n Mul=%d",c);
break;
case 4:c=a/b;
printf("\n Div=%d",c);
break;
default:
break;
}



}