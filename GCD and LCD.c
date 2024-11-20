#include<stdio.h>
int main()
{
    int a,b,small,GCD,LCM;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        small=a;
    }
    else
    {
        small=b;
    }
    for(int i=1;i<=small;i++)
    {
        if(a%i==0 && b%i==0)
        {
            GCD=i;
        }
    }
    LCM=a*b/GCD;
    printf("GCD is %d of %d and %d\n",GCD,a,b);
    printf("LCM is %d of %d and %d\n",LCM,a,b);
    return 0;
}