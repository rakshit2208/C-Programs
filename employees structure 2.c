struct employee
{
   char name[20];
   char address[20];
   int age;
   int salary;
};
int main()
{
   int i,n,j,k;
  
   printf("Enter no of employees:-");
   scanf("%d",&n);
   struct employee emp[n];
   
   for(i=0;i<n;i++)
   {
     printf("\nEnter details of Employee %d:-\n",i+1);
        
     printf("Enter employee name:-");
     scanf("%s", &emp[i].name);
     printf("Enter address of employee:- ");
     scanf("%s", &emp[i]. address);
     printf("Enter age of employee :-");
     scanf("%d", &emp[i].age);
     printf("Enter salary  of employee:- ");
     scanf("%d",&emp[i].salary);
   }
 printf("\n--------------------------------Employee Details------------------------------------\n");
 printf("\n------------------------------------------------------------------------------------\n");
 printf("Emp name\tAddres\t\tAge\t\tSalary\n");
for(i=0;i<n;i++)
{
printf("%s\t\t%s\t\t%d\t\t%d\n",emp[i].name,emp[i].address,emp[i].age,emp[i].salary);
}
j=0;
for(j=0;j<n;j++)
{
    j=j+emp[j].salary;
}
k=j/n;
printf("Average salary of employees=%d",k);
return 0;
}
    