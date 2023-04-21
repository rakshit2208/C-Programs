#include <stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[20];
    int rollno;
    char gender[10];
    char address[20];
    int age;
    char stream[30];
    
}st;


int main()
{
     int i,n;
     printf("Enter no of student:-");
     scanf("%d",&n);
     struct student st[n];
     for(i=0;i<n;i++)
     {
         printf("\nEnter deatials of %d student",i+1);
         printf("\nEnter student name:-");
         scanf("%s",&st[i].name);
         printf("\nEnter Rollno:-");
         scanf("%d",&st[i].rollno);
         printf("\nEnter Gender:-");
         scanf("%s",&st[i].gender);
         printf("\nEnter Address:-");
         scanf("%s",&st[i].address);
         printf("\nEnter Age:-");
         scanf("%d",&st[i].age);
         printf("\nEnter Stream:-");
         scanf("%s",&st[i].stream);
         
     }
        printf("\n----------------------------------STUDENT DETAILS----------------------------------\n");
        
        printf("Name  Rollno  Gender  Address  Age  Stream\n");
        for(i=0;i<n;i++)
        {
            printf("%s   %d     %s    %s     %d   %s\n",st[i].name,st[i].rollno,st[i].gender,st[i].address,st[i].age,st[i].stream);
        }
    return 0;
}
