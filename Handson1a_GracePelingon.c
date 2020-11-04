#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int sum=0;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum= num1+num2;

    if (sum < 100)
    {
        printf("Is the sum <100? TRUE");
    }
    else
    {
        printf("Is the sum <100? FALSE");
    }
}
