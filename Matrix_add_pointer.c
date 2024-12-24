#include<stdio.h>
void init(int r1,int c1,int arr[][100]);
void input(int r1,int c1,int arr[][100]);
void add(int r1,int c1,int arr1[r1][c1],int r2,int c2,int arr2[r2][c2],int sum[r1][c1]);
void print(int r1,int c1,int arr[r1][c1]);
int main()
{
    int r1,c1,r2,c2;
    printf("Enter number of rows and columns in matrix 1: ");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    init(r1,c1,arr1);
    input(r1,c1,arr1);
    printf("Enter number of rows and columns in matrix 2: ");
    scanf("%d %d",&r2,&c2);
    int arr2[r2][c2];
    init(r2,c2,arr2);
    input(r2,c2,arr2);
    int sum[r1][c2];
    init(r1,c2,sum);
    if(r1!=r2 || c1!=c2)
    {
        printf("Addition not possible");
    }
    else
    {
    add(r1,c1,arr1,r2,c2,arr2,sum);
    print(r1,c2,sum);
    }
    return 0;
}

void init(int r1,int c1,int arr[r1][c1])
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0; j<c1; j++)
        {
            *(*(arr+i)+j)=0;
        }
    }
}

void input(int r1,int c1,int arr[r1][c1])
{
    int a=0;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("Enter %d element: ",a++);
            scanf("%d",(*(arr+i)+j));
        }
    }
}

void add(int r1,int c1,int arr1[r1][c1],int r2,int c2,int arr2[r2][c2],int sum[r1][c1])
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            *(*(sum+i)+j)=*(*(arr1+i)+j) + *(*(arr2+i)+j);
        }
    }
}

void print(int r1,int c1,int sum[r1][c1])
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d\t",*(*(sum+i)+j));
        }
        printf("\n");
    }
}