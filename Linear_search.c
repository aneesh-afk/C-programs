#include<stdio.h>
int Linearsearch(int arr[],int n,int a);
int main()
{
int Size;
printf("Enter number of elements\n");
scanf("%d",&Size);
int arr[Size];
printf("Enter elements\n");
for(int i=0;i<Size;i++)
{
scanf("%d",&arr[i]);
}
int a;
printf("Enter element to be searched\n");
scanf("%d",&a);
Linearsearch(arr,Size,a);
return 0;
}

int Linearsearch(int arr[],int n,int a)
{
int I;
for(int i=0;i<n;i++)
{
if(arr[i]==a)
{
I=i;
}
}
printf("The element is present in Index numer %d",I);
return 0;
}