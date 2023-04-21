#include <stdio.h>
#include <string.h> 


int main()
{
    char str[100];

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    strlwr(str); // Convert to lowercase

    printf("Lowercase string : %s", str);

    return 0;
}
