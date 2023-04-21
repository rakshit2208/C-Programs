#include <stdio.h>
int main()
{
 float celsius, fahrenheit;
 /* Input temperature in fahrenheit */
printf("Enter temperature in Fahrenheit:- ");
scanf("%f", &fahrenheit );
/* fahrenheit  to celsius conversion formula */
celsius = (fahrenheit-32)*5/9 ;
printf("%.2f fahrenheit = %.2f Celsius ",fahrenheit,celsius);
 return 0;
 }