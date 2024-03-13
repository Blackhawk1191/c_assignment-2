#include<stdio.h>
int main(void)
{
  int year, month;
  printf("Enter the number of month like 1 for january, 2 for february\n");
  scanf("%d",&month);
  printf("Enter the year\n");
  scanf("%d",&year);
  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    printf("Month has 31 days\n");
  else if(month == 2 && (year % 400 == 00 || (year % 100 != 0 && year % 4 == 0)))
    printf("Month has 29 days\n");
  else if(month == 2 && (year % 400 != 0 || year % 4 != 0))
    printf("Month has 28 days\n");
  else if(month == 4 || month == 6 || month == 9 || month == 11)
    printf("Month has 30 days\n");
  else
    printf("Invalid input for month");

  return 0;
}
