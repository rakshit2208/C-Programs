#include<stdio.h>
 main()
{
   
  int language;
  printf("Enter any number:-");
  scanf("%d",&language);
  switch (language){
  case 1:
  printf("C\n");
  break;
  case 2:
  printf("C#\n");
  break;
  case 3:
  printf("C++\n");
  break;
  case 4:
  printf("PHP\n");
  break;
  case 5:
  printf("Java\n");
  break;
  default:
  printf("other programming language\n");
  }
 }