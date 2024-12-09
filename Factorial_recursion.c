#include<stdio.h>
int Factorial(int n);
int main()
{
    int n=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,Factorial(n));
    return 0;
}

int Factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
}