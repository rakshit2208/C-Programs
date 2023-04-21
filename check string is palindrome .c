#include <stdio.h>
#include<string.h>
main()
{
   int i,l;
   char s[50];
   printf("Enter a string:-");
   scanf("%s",&s);
   l=strlen(s);
   for(i=0;i<l/2;i++)
   {
     if(s[i]!=s[l-1-i])
     {
      printf("String is not a palindrome");
      break;
     }
   }
    if(i==l/2)
    printf("String is a palindrome");
  
}