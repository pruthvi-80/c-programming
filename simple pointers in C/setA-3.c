// Maximum of two integers using pointer
#include<stdio.h>
int main()
{
    int a,b;
    int *ptr1=&a,*ptr2=&b;
    printf("Enter two numbers to check: ");
    scanf("%d%d",ptr1,ptr2);
    if(*ptr1>*ptr2)
    {
        printf("%d is maximum",*ptr1);
    }
    if(*ptr1<*ptr2)
    {
        printf("%d is maximum",*ptr2);
    }
}