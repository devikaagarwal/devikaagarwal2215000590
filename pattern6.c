//pattern 6//
#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(j%2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}