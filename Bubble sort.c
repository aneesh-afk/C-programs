#include<stdio.h>
void Bubble(int arr[100],int Size);
void print(int arr[100],int Size);
int main()
{
int Size;
printf("Enter number of elements\n");
scanf("%d",&Size);
int arr[Size];
printf("Enter the numbers\n");
for(int i=0;i<Size;i++)
{
scanf("%d",&arr[i]);
}
Bubble(arr,Size);
printf("The sorted array is\n");
print(arr,Size);
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

void print(int arr[100],int Size)
{
    for(int i=0;i<Size;i++)
   {
        printf("%d\n",arr[i]);
    }
}  