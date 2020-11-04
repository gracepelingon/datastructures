#include<stdio.h>
int main()
{
    int i;
    int n[10];
    printf("Enter 10 integers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &n[i]);
    }

    printf("\nThe new values are: ");
    for(i=0; i<10; i++)
    {
        if(n[i] %2 == 0)
        {
            n[i] = 2+n[i];
        }
        if (n[i] %2 !=0)
        {
            n[i] = 1+n[i];
        }
        printf("%d ", n[i]);
    }
}
