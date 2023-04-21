#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0;
    char s[40],*str;
    str=&s;
    printf("Enter string:-");
    scanf("%s",&s);
    while(*str!=0)
    {
        if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'||*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
        a++;
        else
        b++;
        str++;
    }
    printf("\nvowel=%d\nconsonant=%d",a,b);
    return 0;
}
    