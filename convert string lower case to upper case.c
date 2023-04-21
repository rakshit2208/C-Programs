#include <stdio.h>
#include <string.h> 


int main()
{
    char str[100];

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    strupr(str); // Convert to uppercase

    printf("Uppercase string : %s", str);

    return 0;
}
