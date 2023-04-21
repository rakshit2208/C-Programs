#include <stdio.h>
 
int main()
 
{
 
   char ch;
 
   FILE *fp1;
 
   FILE *fp2;
 

 
   if (fp1 = fopen("f1.txt", "r"));
 
   {
 
      ch = getc(fp1);
 
 
      fp2 = fopen("f2.txt", "w+");
 
      while (ch != EOF)
 
      {
 
         fputc(ch, fp2);
 
         ch = getc(fp1);
 
      }
 
      fclose(fp1);
 
      fclose(fp2);
 
      return 0;
 
   }
 
   return 1;
 
}
    