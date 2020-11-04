#include<stdio.h>
int main()
{
    char letter, *ptrx;
    int n, *ptry;
    double money, *ptrz;

    ptrx = &letter;
    ptry = &n;
    ptrz = &money;

    printf("Enter your favorite letter: ");
    scanf("%c", &letter);
    printf("Enter your favorite number: ");
    scanf("%d", &n);
    printf("Enter your current money: ");
    scanf("%f", &money);
    printf("\n");
    printf("Your favorite letter is %c, it's memory address is %p\n", *ptrx, ptrx);
    printf("Your favorite number is %d, it's memory address is %p\n", *ptry, ptry);
    printf("Your current money is %.2f, it's memory address is %p\n", *ptrz, ptrz);
}

