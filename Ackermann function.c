#include<stdio.h>
int main()
{
    int A,m,n;
    printf("Enter 1st no:-");
    scanf("%d",&m);
    printf("Enter 2nd no:-");
    scanf("%d",&n);
    A=ack(m,n);
    printf("%d",A);
    return 0;
    
}
int ack(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(m>0&&n==0)
    {
        return ack(m-1,1);
    }
    else if(m>0&&n>0)
    {
        return ack(m-1,ack(m,n-1));
    }
}
