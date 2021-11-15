#include <stdio.h>

int DiagSum(int n, int a[10][10])
{
  int i, j, sum = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i == j)
      {
        sum += a[i][j];
      }
    }
  }
  return sum;
}

int main()
{
  int n, mat[10][10], sum;
  printf("Enter the size of the matrix: ");
  scanf("%d", &n);
  printf("Enter the elements of the matrix: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
  sum = DiagSum(n, mat);
  printf("The sum of the diagonal elements is: %d", sum);
}