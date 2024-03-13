#include<stdio.h>
int main()
{
 
  int n1,n2;
  printf("Enter the numbers\n");
  scanf("%d%d",&n1,&n2);
 /*
 //find greater no. using if else

 if(n1>n2)
    printf("%d is greater than %d\n",n1,n2);
  else
    printf("%d is greater than %d\n",n2,n1);
  */

  int max= n1>n2 ? n1 : n2;
  printf("%d is greater",max);
  return 0;
}
