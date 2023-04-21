#include<stdio.h>  
main()    
{    
  char str1[20],str2[20];
  printf("Enter any string is str1:-");
  scanf("%s",&str1);
  strcpy(str2,str1);
  printf("After copy str2=%s",str2);
}