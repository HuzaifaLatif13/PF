#include<stdio.h>
void printPascal(int k)
{
  int arr[k][k];

  for (int row = 0; row < k; row++)
  {
    for (int col = 0; col <= row; col++)
    {
      if (row == col|| col == 0)
        arr[row][col] = 1;

      else
        arr[row][col] = (arr[row - 1][col - 1] + arr[row - 1][col]);
      printf("%d ",arr[row][col]);
    }
    printf("\n");
  }
}

int main()
{
  int n;
  printf("Enter the number of rows");
  scanf("%d",&n);
  printPascal(n);
  return 0;
}