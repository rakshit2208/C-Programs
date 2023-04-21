#include <stdio.h>
int main()
{
 float celsius, kalvin;
 /* Input temperature in kalvin */
printf("Enter temperature in Kalvin:- ");
scanf("%f", &kalvin);
/* kalvin to celsius  conversion formula */
 celsius = (kalvin-273);
printf("%.2f Kalvin = %.2f Celsius", kalvin,celsius);
 return 0;
 }