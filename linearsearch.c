#include <stdio.h>
int main()
{
  int a[10], x, i, n;

  //getting user input for size of array n
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  
  //getting user input for element in array
  printf("Enter %d elements\n", n);

  //this for loop is for iteration
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Enter a number to search\n");
  scanf("%d", &x);

  //and this for loop is for finding match of user input
  for (i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      printf("%d is present at index %d.\n", x , i);
      break;
    }
  }
  // this if statement is used for element that you searched isnt present in givnen array 
  if (i == n)
    printf("%d isn't present in the array.\n", x);
}