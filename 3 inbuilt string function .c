#include <stdio.h>
#include <string.h>
int main()
{
     char s1[20];
     char s2[20]; 
     printf("Enter 1st string:-");
     scanf("%s",&s1);
     printf("Enter 2nd string:-");
     scanf("%s",&s2);
     
     if (strcmp(s1, s2)==0)
     {
        printf("string 1 and string 2 are equal\n");
     }
     else
      {
         printf("string 1 and 2 are different\n");
      }
       strcat(s1,s2);
       printf("string after concatenation:-%s\n",s1);
       strcpy(s1,s2);
       printf("String s1 is:- %s\n",s1);
       
     return 0;
}
    