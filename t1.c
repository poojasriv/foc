#include <stdio.h>
int main ()
{
  int m, n, i, j, k, sum_even_nums = 0;
  printf("\nInput two integes (m, n):\n");
  scanf("%d %d", &m, &n);
  printf("\nSum of %d even numbers starting from %d: ",n,m);
   for (k = 0, j = m; k < n; j++)
    {

      if (j % 2 == 0)
      {

        sum_even_nums += j;
        k++;

      }
    }
    printf("\n%d", sum_even_nums);
  }
