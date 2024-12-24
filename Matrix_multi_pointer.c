#include <stdio.h>
int main()
{
    int arr1[100][100], arr2[100][100], mul[100][100], r1, c1, r2, c2;
    printf("Enter No. of Row and Columns of Matrix 1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter Elements of 1st Matrix: \n");
    input(arr1, r1, c1);
    printf("Enter No. of Row and Columns of Matrix 2: ");
    scanf("%d%d", &r2, &c2);
    printf("Enter Elements of 2nd Matrix: \n");
    input(arr2, r2, c2);

    if (c1 != r2)
    {
        printf("Matrix cannot be multiplied!");
        return 0;
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            *(*(mul + i) + j) = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                *(*(mul + i) + j) += *(*(arr1 + i) + k) * *(*(arr2 + k) + j);
            }
        }
    }
    printf("Multiplication of Matrix is: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", *(*(mul + i) + j));
        }
        printf("\n");
    }
    return 0;
}

void input(int arr[][100], int r, int c)
{
    int a=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d element: ",a++);
            scanf("%d", (*(arr + i) + j));
        }
    }
}