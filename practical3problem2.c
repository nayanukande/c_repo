#include<stdio.h>
int main()
   {
     int upper = 0, lower = 0;
     char ch[80];
     int i;
     printf("\nEnter The String : ");
     gets(ch);
     i = 0;
      while (ch[i] != '\0')
   {
     if (ch[i] >= 'A' && ch[i] <= 'Z')upper++;
     if (ch[i] >= 'a' && ch[i] <= 'z')lower++;
     i++;
   }
   printf("lowercase letters: %d",lower);
   printf("\nuppercase letters: %d",upper);
    return (0);
   }
