#include<stdio.h>
int main()
{
    int num1;
    int sum=0;

    printf("Enter a number: ");
    scanf("%d", &num1);

    sum= (num1*(num1+1)*(2*num1+1))/6;
    printf("The sum of all square number is: %d", sum);







}
