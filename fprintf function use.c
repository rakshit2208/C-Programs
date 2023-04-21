#include <stdio.h>  
main()
{  
   FILE *fp;
   char s[49];
   fp = fopen("file.txt", "w"); 
   fprintf(fp,"My name is rakshit yadav\n");
   fprintf(fp, "\n");
   fclose(fp); 
}
    