#include<stdio.h>

main()
{
float H,E,M,P,C;
float Avg;
printf("Enter the value of H");
scanf("%f",&H);
printf("Enter the value of E");
scanf("%f",&E);
printf("Enter the value of M");
scanf("%f",&M);
printf("Enter the value of P");
scanf("%f",&P);
printf("Enter the value of C");
scanf("%f",&C);
Avg=(H+E+M+P+C)/5.0;
printf("avg of all subject= %f",Avg);
if(Avg>33)
printf(" \n student is pass and his marks is= %f ",Avg);
else 
   printf(" \n student is Fail and his marks is= %f",Avg);
}