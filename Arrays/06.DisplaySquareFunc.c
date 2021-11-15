#include <stdio.h>

void display(int (*mat)[10])
{

  int i, j;

  printf("\n The elements of the matrix are:");

  for (i = 0; i < 3; i++)

  {

    printf("\n");

    for (j = 0; j < 3; j++)

      printf("\t %d", *(*(mat + i) + j));
  }
}

int main()
{

  int n, mat[10][10];

  printf("Enter the number of rows and columns: ");

  scanf("%d", &n);

  printf("Enter the elements of the matrix: \n");

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {

      scanf("%d", &mat[i][j]);
    }
  }
  display(mat);

  return 0;
}
