#include<stdio.h>
main()
{
  int x[2][2],y[2][2],z[2][2];
  int i,j;
  printf("Enter elements of 1st matrix \n ");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&x[i][j]);
    }
  }
   printf("Enter elements of 2nd matrix \n ");
     for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
         {
           scanf("%d",&y[i][j]);
         }
       }
            for(i=0;i<2;i++)
             {
               for(j=0;j<2;j++)
                {
                   z[i][j]=x[i][j]-y[i][j];
                 }
              }
    printf("Subtraction  of matrix\n");
       
                  for(i=0;i<2;i++)
                    {
                      for(j=0;j<2;j++)
                       {
                         printf("%d\t", z[i][j]);
                       }
                         printf("\n");
                     }
}  