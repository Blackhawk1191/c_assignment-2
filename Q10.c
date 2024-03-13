#include<stdio.h>
int main(void)
{
  char c;
  printf("Enter the charcter\n");
  scanf("%c",&c);
  if(c >=65 && c <= 90)
    printf("%c is upper case alphabet\n", c);
  else if(c >= 97 && c <= 122)
    printf("%c is lower case alphabet\n", c);
  else if(c >= 48 && c <= 57)
    printf("%c is a digit\n", c);
  else if(c == 32)
    printf("%c is a space\n", c);
  else if(c == 9)
    printf("%c is a tab\n", c);
  else if(c == 13)
    printf("%c is a carriage return\n", c);
  else if(c == 10)
    printf("%c is a enter\n", c);

  else
    printf("Not listed above\n");
  return 0;
}
