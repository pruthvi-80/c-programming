// Program to read two integers using pointers and perform all arithmetic operations on them
#include<stdio.h>
int main()
{
  int a,b;
  int *ptr1,*ptr2;	
  int sum,sub,mult;
  float div;   
  printf("Enter number A: ");
  scanf("%d",&a);
  printf("Enter number B: ");
  scanf("%d",&b);
  ptr1=&b;
  ptr2=&b;
  sum=(*ptr1) + (*ptr2);
  sub=(*ptr1) - (*ptr2);
  mult=(*ptr1) * (*ptr2);
  div=(*ptr1) / (*ptr2);
  printf("Sum= %d\n",sum);
  printf("Subtraction= %d\n",sub);
  printf("Multiplication= %d\n",mult);
  printf("Division= %f\n",div);
  return 0;
}
