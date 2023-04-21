#include<stdio.h>  
main()    
{    
  char str1[20],str2[20];
  printf("Enter the first string:-");
  scanf("%s",&str1);
  printf("Enter the second  string:-");
  scanf("%s",&str2);
  strcat(str1,str2);
  printf("Concatenated string=%s",str1);
}