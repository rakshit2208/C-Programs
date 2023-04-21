#include<stdio.h>
struct student
{
   char name[50];
   char address[60];
   int age;
};
void main()
{
   struct student st,*st1;
   st1=&st;
   reads(st1);
   display(st1);
}
void reads(struct student *st2)
{
  printf("Enter student name:-");
  scanf("%s",&st2->name);
  printf("Enter student address:-");
  scanf("%s",&st2->address);
  printf("Enter student age:-");
  scanf("%d",&st2->age);
  printf("\n----------student details ----------\n");
}
void display(struct student *st2)
{
   printf("Name:-%s\n",st2->name);
   printf("Address:-%s\n",st2->address);
   printf("Age:-%d\n",st2->age);
}