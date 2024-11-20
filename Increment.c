#include<stdio.h>
int main()
{
    int a=10;
    printf("The value of a before increment is %d\n",a++);
    printf("The value of a before decrement is %d\n",a--);
    printf("The value of a after increment is %d\n",++a);
    printf("The value of a after decrement is %d\n",--a);
    printf("Final value is %d\n",a);
    return 0;
}