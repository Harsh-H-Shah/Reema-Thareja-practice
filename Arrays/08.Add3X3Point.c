#include <stdio.h>

int main()
{
  int a[3][3], b[3][3], i, j, sum[3][3];
  printf("Enter the elements of the first matrix\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter the elements of the second matrix\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      *(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
    }
  }
  printf("The sum of the two matrices is:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", *(*(sum + i) + j));
    }
    printf("\n");
  }
}