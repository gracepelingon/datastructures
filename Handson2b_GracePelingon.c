#include<stdio.h>

void computeExponent();
int main()
{
	printf("Computing the Exponent of Base \n");
	computeExponent();
}
void computeExponent()
{	
	int base;
	int exponent;
	double value;
	
	printf("Enter the base number and exponent: ");
	scanf("%d %d", &base, &exponent);
	
	value= pow(base, exponent);
	
	printf("%d raised to the power of %d^ is: %.0f",base, exponent, value);
}
