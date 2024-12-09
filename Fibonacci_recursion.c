#include<stdio.h>
int Fibonacci(int n);
int main()
{
    int n=0;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    printf("The number at %d position is %d",n,Fibonacci(n-1));
    return 0;
}

int Fibonacci(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
} 