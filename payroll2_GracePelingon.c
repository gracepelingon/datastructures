#include<stdio.h>

int main()
{
    a();
}
void a (void)
{
    float hours;
    float salary;
    float product;

    printf("Enter the no. of hours worked: ");
    scanf("%f", &hours);
    printf("Enter salary per hour: ");
    scanf("%f", &salary);

    product=hours*salary;

    printf("\nYour payroll is: %.2f \n", product);

    return 0;
}

