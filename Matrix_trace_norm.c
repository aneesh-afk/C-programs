#include<stdio.h>
#include<math.h>
float square(int r1,int c1,int arr[10][10]);
int trace(int arr[10][10],int r1,int c1);
int main()
{
int result;
int arr[10][10];
int r1,c1;
printf("Enter no. of rows and columns in matrix 1\n");
scanf("%d %d",&r1 ,&c1);
printf("Enter 1 matrix elements\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
scanf("%d",&arr[i][j]);
}
}
result=trace(arr,r1,c1);
printf("The trace of %d x %d matrix is %d\n",r1,c1,result);
float resultn=square(r1,c1,arr);
printf("The norm of matrix elements is %.2f\n",resultn);
return 0;
}

int trace(int arr[10][10],int r1,int c1)
{
    if(r1==c1)
    {
int result = 0;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
if(i==j)
{
result=result+arr[i][j];
}
}
}
return (result);
    }
    else
    {
        printf("Trace cannot be found");
        return 0;
    }
}

float square(int r1,int c1,int arr[10][10])
{
int result=0;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
result = result + arr[i][j]*arr[i][j];
}
}
return sqrt(result);
}