#include<stdio.h>
int main()
{
    int i, j;
    int arr[3][10]={
    {0,1,2,3,4,5,6,7,8,9},
    {10,11,12,13,14,15,16,17,18,19},
    {20,21,22,23,24,25,26,27,28,29}
    };

    for(i=0; i<3; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%4d", arr[i][j]);
        }

    printf("\n");
    }

    return 0;
}
