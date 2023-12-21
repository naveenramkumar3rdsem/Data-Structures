#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a,b;
    printf("Enter two numbers to swap ");
    scanf("%d %d", &a, &b);
    printf("The numbers before swapping are %d and %d", a, b);
    swap(&a, &b);
    printf("\nThe numbers after swapping are %d and %d", a, b);
}
