#include <stdio.h>

int main()
{
  int a[10][10], row, col, i, j, n, count = 0;
  printf("Enter the number of rows and columns of the matrix\n");
  scanf("%d %d", &row, &col);
  printf("Enter the elements of the matrix\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (a[i][j] > 0)
      {
        count++;
      }
    }
  }
  printf("The total number of non zero elements are %d", count);
}