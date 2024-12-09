#include<stdio.h>
int series(int n);
void series1(int n,int y);
int main()
{
    int n=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int y=n;
    int k=series(n);
    series1(k,y);
    return 0;
}

int series(int n)
{
    if(n<0)
    {
        return n;
    }
    else
    {
        printf("%d ",n);
        return series(n-5);
    }
}

void series1(int n,int y)
{
    printf("%d ",n);
    if(n!=y)
    {
        return series1(n+5,y);
    }
    else
    {
        return 0;
    }
}