#include <stdio.h>
int main()
{
  int i, n, l, r, mid, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  l = 0;
  r = n - 1;
  mid = (l+r)/2;

  while (l <= r) {
    if (array[mid] < search)
      l = mid + 1;
    else if (array[mid] == search) {
      printf("%d found at location %d.\n", search, mid);
      break;
    }
    else
      r = mid - 1;

    mid = (l + r)/2;
  }
  if (l > r)
    printf("%d is not present in the list.\n", search);

  return 0;
}