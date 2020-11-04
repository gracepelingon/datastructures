#include<stdio.h>
#define ROWS 10
#define COLUMNS 9
int main()
{
    int table [ROWS][COLUMNS];
    int row, column;
    int i, j;
    printf("         Multiplication Table \n");

    for(i=0;i<ROWS;i++)
    {
        row = i+1;
        printf("%2d", row);

    for(j=1;j<=COLUMNS;j++)
    {
        column = j+1;
        table[i][j]=row*column;
        printf("%4d", table[i][j]);
    }
    printf("\n");
    }
    return 0;
}
