#include<stdio.h>
void Insertion(int arr[100],int Size);
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
Insertion(arr,Size);
printf("The sorted array is \n");
print(arr,Size);
return 0;
}

void Insertion(int arr[100],int Size)
{
    for(int i=0;i<Size;i++)
    {
        int hold=arr[i];
        int h=i;
        for(int j=Size-1;j>0;j--)
        {
            if(hold>arr[j])
            {
                hold=arr[j];
                h=j;
            }
        }
        for(int k=i+1;k<Size;k++)
        {
            

        }
    }
}

