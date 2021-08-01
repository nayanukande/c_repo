#include <stdio.h>
  int main ()
  {
    float marks1, marks2, marks3, marks4, marks5, total, average;
    printf("Enter marks obtained in subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks obtained in subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks obtained in subject 3: ");
    scanf("%f", &marks3);
    printf("Enter marks obtained in subject 4: ");
    scanf("%f", &marks4);
    printf("Enter marks obtained in subject 5: ");
    scanf("%f", &marks5);
    total = (marks1 + marks2 + marks3 + marks4 + marks5);
    average = (total) / 3;
    printf("Average : %0.2f\n", average);
    if (average>=35&50) {print("third class division");}
     else if (average>=50&60) {printf("second class division");}
     else if (average>=60&75) {printf("first class division");}
     else if (average>=75&100) {printf("Destinction");}
      else {printf("Fail");}
      return 0;
    }
