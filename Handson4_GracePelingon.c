#include<stdio.h>
int main()
{
    int i, product=0;
    int arr[11];

    for(i=1; i<=10; i++)
    {
        +1;
        printf("Enter value %d: ", i);
        scanf("%d", &arr[i]);
    }
        printf("\nThe multiplied values are:\n");
        printf("\n");

    for(i=1; i<=10; i++)
    {
        +1;
        product = (i-1)*arr[i];
        printf("Value %d: %d\n", i, product);
    }
    return 0;
}
