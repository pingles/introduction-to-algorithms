#include <stdio.h>
#include <stdlib.h>

void
insertion_sort(int count, int* a)
{
  int i, j;
  int key;
  
  for (j = 1; j < count; j++)
  {
    key = a[j];
    // insert A[j] into sorted sequence A[0..j - 1]

    i = j - 1;
    while (i > 0 && a[i] > key)
    {
      a[i + 1] = a[i];
      i--;
    }

    a[i + 1] = key;
  }
}

int
main(void)
{
  int n = 0;
  int input[6];

  printf("Enter 6 integers: ");
  while (n < 6)
  {
    scanf("%d", &input[n]);
    n++;
  }

  insertion_sort(6, input);

  n = 0;
  while (n < 6)
  {
    printf("%d ", input[n]);
    n++;
  }

  printf("\n");
  
  return EXIT_SUCCESS;
}
