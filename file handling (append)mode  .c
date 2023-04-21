#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char str[40];
    fp=fopen("f1.txt","a");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    printf("Enter your name:-");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    return 0;
}