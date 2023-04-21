#include<stdio.h>
void main()
{
    int i;
    char str[20]="Rakshit";
    printf(" The String is:-");
    puts(str);
    printf("After the reversing string is:-");
    for(i=20;i>=0;i--)
    {
       printf("%c",str[i]);
    }
    
}
