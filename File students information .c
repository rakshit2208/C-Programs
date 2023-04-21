#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char name[40];
    int age;
    int rollno;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File cannot open\n");
        exit(1);
    }
    printf("Enter the name:-");
    gets(name);
    fprintf(fp,"Name=%s\n",name);
    printf("Enter the age:-");
    scanf("%d",&age);
    fprintf(fp,"Age=%d\n",age);
     printf("Enter the rollno:-");
    scanf("%d",&rollno);
    fprintf(fp,"Rollno=%d\n",rollno);
    fclose(fp);
    return 0;
    
    
}
