#include<stdio.h>

void rectPerimeter();

int main()
{
	printf("Getting the perimeter of a rectangle \n");
	rectPerimeter();
}

void rectPerimeter()
{	
	int l;
	int w;
	int perimeter=0;
	
	printf("Enter the rectangle's length and width: ");
	scanf("%d %d", &l, &w);
	
	perimeter=2*(l+w);
	
	printf("The rectangle's perimeter is: %d", perimeter);
}
