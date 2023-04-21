#include <stdio.h>
#include <math.h>

main()
{
   int a,b,c,d;
   float root1,root2;
 
   printf("Input the value of a,b & c : ");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d==0)
   {
     printf("Both roots are equal.\n");
     root1=-b/(2.0*a);
     root2=root1;
     printf("First  Root = %f\n",root1);
     printf("Second Root = %f\n",root2);
   }
   else if(d>0)
	{
	   printf("Both roots are real and different\n");
	   root1=(-b+sqrt(d))/(2*a);
	   root2=(-b-sqrt(d))/(2*a);
	   printf("First  Root = %f\n",root1);
	   printf("Second Root = %f\n",root2);
	}
	else
	    printf("Root are imaginary\nNo Solution. \n");
}