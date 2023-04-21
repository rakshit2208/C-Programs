#include <stdio.h> 
#include <string.h> 
struct student
{
   char name[30];
   int rollno;
   char gender[10];
   int age;
   char address[20];
   float marks;
};
main()
{
   struct student st1;
   printf("Enter your name:-");
   scanf("%s",&st1.name);
   printf("%s", st1.name);
   printf("\nEnter your rollno:-");
   scanf("%d",&st1.rollno);
   printf("%d",st1.rollno);
   printf("\nEnter your gender:-");
   scanf("%s",&st1.gender);
   printf("%s",st1.gender);
   printf("\nEnter your age:-");
   scanf("%d",&st1.age);
   printf("%d", st1.age);
   printf("\nEnter your address:-");
   scanf("%s",&st1.address);
   printf("%s",st1.address); 
   printf("\nEnter your marks:-");
   scanf("%f",&st1.marks);
   printf("%f",st1.marks);
   
}
    