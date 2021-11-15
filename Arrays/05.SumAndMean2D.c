#include <stdio.h>

int main()
{
    int i, j, n, sum = 0, mean = 0;
    int a[100][100];
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
    }
    mean = sum / (n * n);
    printf("The sum of all elements is %d\n", sum);
    printf("The mean of all elements is %d\n", mean);
    return 0;
}