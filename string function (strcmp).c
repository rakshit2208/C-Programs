#include<stdio.h>  
main()    
{    
  char str1[20],str2[20];
  printf("Enter the first string:-");
  scanf("%s",&str1);
  printf("Enter the second  string:-");
  scanf("%s",&str2);
  if(strcmp(str1,str2)==0)
  printf("Both strings are equal");
  else
  printf("Strings are unequal");
}