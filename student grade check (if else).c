#include <stdio.h>

int main()
{
    int H,C,E,P,M,per;
    printf("Enter five subjects number:-");
    scanf("%d %d %d %d %d",&H,&C,&E,&P,&M);
    per=(H+C+E+P+M)/5;
    if(per>=60)
    printf("First division");
    
     if(per>=50&&per<60)
    printf("Second division");
    
     if(per>=40&&per<50)
    printf("Third division");
    
     if(per<40)
    printf("Fail");
    
    return 0;
}