#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int y=n;
    int x=n;
    int sum=0;
    int count=0;
    while(y!=0)
    {
        y=y/10;
        count++;
    }
    while(x!=0)
    {
        int rem=x%10;
        int rem1=1;
    for(int i=1;i<=count;i++)
    {
        rem1=rem1*rem;
    }
    sum = sum + rem1;
    x=x/10;
    }
    if(sum==n)
    {
        printf("%d is an Armstrong number\n",n);
    }
    else
    {
        printf("%d is not an Armstrong number\n",n);
    }
    return 0;
}