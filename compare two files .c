#include<stdio.h>

int  main()
{
    FILE *f1,*f2;
    int a,b;
    f1=fopen("A.txt","r");
    f2=fopen("B.txt","r");
    
    if(f1==NULL||f2==NULL)
    {
        printf("CANNOT READ FILE\n");
    }
    else
    {
        a=getc(f1);
        b=getc(f2);
        while(a!=EOF&&b!=EOF)
        {
            a=getc(f1);
            b=getc(f2);
        }
        if(a==b)
        {
            printf("\nFiles Are Equal!\n");
        }
        else 
        {
            printf("\nFiles Are Not Equal!\n");
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
