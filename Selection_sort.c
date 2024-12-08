#include <stdio.h>
void Selection(int arr[100],int Size);
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
Selection(arr,Size);
}

void Selection(int arr[100],int Size)
{
    for(int i=0;i<Size;i++)
    {
        int hold=arr[i];
        int h=i;
        for(int j=i;j<Size;j++)
        {
            if(arr[j]<hold)
            {
                hold=arr[j];
                h=j;
            }
        }
        int temp=arr[h];
        arr[h]=arr[i];
        arr[i]=temp;
        printf("After %d iteration \n",i);
        print(arr,Size);
        printf("\n");
    }
    printf("The sorted array is ");
    print(arr,Size);
}

void print(int arr[100],int Size)
{
    for(int i=0;i<Size;i++)
   {
        printf("%d ",arr[i]);
    }
}  