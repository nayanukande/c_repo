#include <stdio.h>
int main()
  {
    int age=0, wt=0;
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("\nPlease enter your weight: ");
    scanf("%d", &wt);
    if ((age > 18 && age <= 55) && wt > 45)
    printf("\n\nBlood donor is eligible.\n");
    else
    printf("\n\nBlood donor isn't Eligible to donate blood due to deficiency in something.\n");
  // mam if you see this then I want to function in last printf statment whi is result statemn that
  //  when the statement is false then why it false like
  //blood door isn't eligible due to deficiency in "age or weight"
    return 0;
  }
