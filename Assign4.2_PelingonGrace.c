#include<stdio.h>
int main()
{
    int num[5];
    int a, i, sum=0;

    printf("Enter the five integers: ");

    for (a=0;a<5;++a)
    scanf("%d", &num[a]);
    for (a=0;a<5;++a)
    {
        sum=sum+num[a];
    }
    printf("The value of arrays are: ");
    for (i=0;i<a;i++)
    {
        printf("%2d", num[i]);
    }
    printf("\nThe sum of all integers is: %d", sum);
    return 0;
}
