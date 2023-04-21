#include<stdio.h>

int fib(int);

int main()
{
    int limit, count;

    printf("Enter no of terms of Fibonacci Series to be printed\n");
    scanf("%d", &limit);

    for(count = 1; count <= limit; count++)
    {
        printf("\n%d. %d\n", count, fib(count));
    }

    return 0;
}

int fib(int num)
{
    if(num == 1)
        return(0);
    else if(num == 2 || num == 3)
        return(1);
    else
        return( fib(num-1) + fib(num-2) );
}
