#include<stdio.h>
void Multiplication(int r1,int c1,int r2,int c2,int arr1[r1][c1],int arr2[r2][c2],int multi[r1][c2]);           
void print(int r1,int c1,int arr[r1][c1]);
void input(int r1,int c1,int arr[r1][c1]);
int main()
{
    int r1,r2,c1,c2;
    printf("Enter number of rows and columns of matrix 1\n");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    input(r1,c1,arr1);
    printf("Enter number of rows and columns of matrix 2\n");
    scanf("%d %d",&r2,&c2);
    int arr2[r2][c2];
    if(c1!=r1)
    {
        printf("Matrix cannot be multiplied\n");
    }
    else
    {
    int multi[r1][c2];
    for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                multi[i][j] = 0; 
            }
    }
    input(r2,c2,arr2);
    Multiplication(r1,c1,r2,c2,arr1,arr2,multi);
    print(r1,c2,multi);
    }
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

void Multiplication(int r1,int c1,int r2,int c2,int arr1[r1][c1],int arr2[r2][c2],int multi[r1][c2])
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                multi[i][j]=multi[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
}

void print(int r1,int c1,int arr[r1][c1])
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}