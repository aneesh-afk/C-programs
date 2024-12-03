#include<stdio.h>
void Bubble(int arr[100],int Size);
int Search(int arr[100],int Size,int n);
int main()
{
int Size;
int n;
printf("Enter number of elements\n");
scanf("%d",&Size);
int arr[Size];
printf("Enter the numbers\n");
for(int i=0;i<Size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the number to be searched\n");
scanf("%d",&n);
Bubble(arr,Size);
int index=Search(arr,Size,n);
printf("The element it can be found is at %d\n",index);
return 0;
}

void Bubble(int arr[100],int Size)
{
int temp;
for(int k=0;k<Size;k++)
{
for(int j=0;j<Size-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}

int Search(int arr[100],int Size,int n)
{
    int index=0;
    int low=0;
    int r=0;
    int high=Size-1;
    while (r!=1)
    {
    int mid=low+(high-low)/2;
    if(arr[mid]==n)
    {
        index=mid;
        r=1;
    }
    else if(arr[mid]>n)
    {
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
    }
    return index;
}