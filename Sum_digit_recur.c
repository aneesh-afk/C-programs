#include<stdio.h>
int sum(int n);
int main()
{
    int n=0;
    printf("Enter  a number\n");
    scanf("%d",&n);
    printf("The sum of digits of %d is %d\n",n,sum(n));
    return 0;
}

int sum(int n)
{
    int y=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10+sum(n/10);
    }
}