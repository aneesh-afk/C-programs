#include<stdio.h>
void Sum(int r1,int c1,int arr[r1][c1]);
void input(int r1,int c1,int arr[r1][c1]);
int main()
{
    int r1,c1;
    printf("Enter number of rows and columns in matrix\n");
    scanf("%d %d",&r1,&c1);
    int arr[r1][c1];
    input(r1,c1,arr);
    Sum(r1,c1,arr);
    return 0;
}

void input(int r1,int c1,int arr[r1][c1])
{
    printf("Enter elements of matrix\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void Sum(int r1,int c1,int arr[r1][c1])
{
    int sum=0;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of all elements is %d",sum);
}