#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c:-");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greater than b and c");
    }
    else if(b>a&&b>c)
    {
        printf("b is greater than a and c");
    }
     else if(c>a&&c>b)
    {
        printf("c is greater than a and b");
    }
     else
    {
        printf("All are equal or any two values are equal");
    }
    return 0;
}
    