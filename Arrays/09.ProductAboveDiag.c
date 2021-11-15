#include <stdio.h>

int main()
{
  int a[10][10], i, j, n, prod = 0;
  printf("Enter the size of the matrix\n");
  scanf("%d", &n);
  printf("Enter the elements of the matrix\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      {
        prod *= a[i][j];
      }
    }
  }
  printf("Product of elements above the main diagnol is %d", prod);
}