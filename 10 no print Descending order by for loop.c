#include <stdio.h>

int main()
{
    int a[10],i,j,n,t;

    printf ("Enter the no of elements:-");
    scanf ("%d",&n);

    for (i=0;i<n;i++)
    {
        printf ("Enter the %dth element:-", (i+1));
        scanf ("%d",&a[i]);
    }

    for (j=0;j<(n-1);j++)
    {
        for (i=0;i<(n-1);i++)
        {
            if (a[i+1]>a[i])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }

    printf ("Descending order:- ");
    for (i=0;i<n;i++)
    {
        printf (" %d",a[i]);
    }
}