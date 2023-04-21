#include<stdio.h>
 void main()
{
 
   FILE *fp;  
   char b[20];
   fp = fopen("file.txt", "r");  
   while(fscanf(fp, "%s", b)!=EOF)
   {  
   printf("%s", b);  
   }  
   fclose(fp);  
}
    