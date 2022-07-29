// Using pointer to array display array in reverse order
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,arr[15];
    int *ptr;
    printf("Enter the size of array (max=15): ");
    scanf("%d",&n);
    if(n>15)
    {
        printf("Error! size limit exceeded (maximum limit =15)");
        exit(1);
    }
    ptr = &arr[0];
    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        printf("\nelement %d :",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    ptr = &arr[n-1];
    printf("\nelements in reverse order");
    for(i=n;i>0;i--)
    {
        printf("\n element  %d : %d  ", i, *ptr);
        ptr--;
    }
}