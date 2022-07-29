// Using pointers check if numbewr is even or odd
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int *ptr1;
    printf("Enter the number to check: ");
    scanf("%d",&a);
    ptr1=&a;
    b= a % 2;
    if(b==0)
    {
        printf("%d is Even",a);
    }
    else
    {
        printf("%d is Odd",a);
    }
}