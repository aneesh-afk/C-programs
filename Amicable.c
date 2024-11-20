#include<stdio.h>
int main()
{
    int a,b;
    int sum1=0;
    int sum2=0;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum1+=i;
        }
        else
        {
            continue;
        }
    }
    for(int j=1;j<b;j++)
    {
        if(b%j==0)
        {
            sum2+=j;
        }
        else
        {
            continue;
        }
    }
    if(sum1==b && sum2==a)
    {
        printf("%d and %d are amicable numbers",a,b);
    }
    else
    {
        printf("%d and %d are not amicable numbers",a,b);
    }
    return 0;
}