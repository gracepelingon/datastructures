#include<stdio.h>
int main()
{
    int *ptr, n;

    n = 10;
    printf("Address of num = %p\n", &n);
    printf("Value of num = %d \n", n);
    ptr = &n;
    printf("Address of ptr = %p\n", &ptr);
    printf("Value of ptr = %p\n", ptr);
    printf("Value of pointed by ptr = %d \n", *ptr);
}
