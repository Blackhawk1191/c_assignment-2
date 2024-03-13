#include<stdio.h>
int main()
{
  int year, Num;
  printf("Enter the year\n");
  scanf("%d",&year);
  /*
  if(year % 100 == 0)
    {
      if(year % 400 == 0)
	    printf("NUmber of days in %d year= 366\n", year);
      else
	    printf("Number of days in %d year = 365\n", year);
     }

  else if(year % 4 == 0)
      printf("number of days in %d year = 366\n", year);
  */

  /*
  // leap year using locical operator
  if(year % 400 == 0)
    printf("NUmber of days in %d year= 366\n", year);
  if(year % 4 == 0 && year % 100 != 0)
    printf("NUmber of days in %d year= 366\n", year);
  else
    printf("NUmber of days in %d year= 365\n", year);
  */
  
  // using conditional operator

  Num = year % 100 == 0 ? (year % 400 == 0 ? 366 : 365 ) :(year % 4 == 0 ? 366 : 365);
  printf("number of days in %d year = %d\n",year, Num);


  return 0;
}

