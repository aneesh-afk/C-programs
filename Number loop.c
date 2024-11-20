#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}