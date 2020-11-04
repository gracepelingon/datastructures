#include<stdio.h>
void addnum(int *n1, int *n2);

int main()
{
    int n1, *ptrx;
    int n2, *ptry;
    int sum, *ptrz;

    ptrx = &n1;
    ptry = &n2;
    ptrz = &sum;

void addnum(int *n1, int *n2);
{
    printf("Enter two integer: ");
    scanf("%d %d", &n1, &n2);

    sum = n1 + n2;
    printf("The sum of two integer is: %d", *ptrz);
}
}
