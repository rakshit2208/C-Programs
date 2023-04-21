#include <stdio.h>

int main()
{
    int n,i;
    int *ptr;
    printf("Enter no of elements in array:- ");
    scanf("%d",&n);
    int a[n];
    ptr=&a[n];
    
    printf("Enter array elements:-\n");
    for(i=0;i<n;i++)
    {
        printf("Enter elements %d:-",i+1);
        scanf("%d",ptr+i);
    }
    printf("Address of array elements:-\n");
     for(i=0;i<n;i++)
    {
        printf("%d\n",(ptr+i));
    }

    return 0;
}
