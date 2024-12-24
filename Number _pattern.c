#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    int l=n;
    int m=n;
    for(int i=0;i<n;i++)
    {
        int k=1;
        for(int j=0;j<2*n;j++)
        {
            if(j>=l && j<=m)
            {
                printf("%d",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        l--;
        m++;
        printf("\n");
    }
    return 0;
}