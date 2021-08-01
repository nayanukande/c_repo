#include <stdio.h>
  func1()
  {
      int j;
      printf("Enter a number:");
      scanf("%d",&j);
      printf("Cube of given number:%d", j*j*j);
  };
func2()
{
    float per, j;
    printf("\nEnter the radius of circle:");
    scanf("%f",&j); per=2*3.14*j;
    printf("Perimetere of circe is:%.3f",per);
};
func3()
{
    int n, j, s, m;
    printf("\n\nEnter a multi-digit number:");
    scanf("%d", &n);
    while(n != 0)
    {
        m=n/10;
        j=n%10;
        s=s+(j*j);
        n=m;
    }
    printf("\nSum of squares of number:%d",s);
};
int main()
{
    func1();
    func2();
    func3();

}