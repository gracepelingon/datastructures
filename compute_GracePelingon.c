#include<stdio.h>

int main()
{
    a();
}
void a (compute)
{
    int sum=0;
    int difference=0;
    int product=0;

    int num1=50;
    printf("%d is the first number \n", num1);
    int num2=90;
    printf("%d is the second number \n", num2);

    printf("%d %d are the two numbers \n", num1, num2);

    sum=num1+num2;
    printf("\nSum of two numbers: %d \n", sum);
    difference=num1-num2;
    printf("Difference of two numbers: %d \n", difference);
    product=num1*num2;
    printf("Product of two numbers: %d \n", product);

    return 0;
}
