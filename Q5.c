#include<stdio.h>
int main()
{
  int n1,n2,n3;
  printf("Enter the numbers\n");
  scanf("%d%d%d",&n1,&n2,&n3);

  //find greatest of three numbers using if else
  /*
  if(n1>n2 && n2>n3)
    printf("%d is greatest\n",n1);
  else if(n2>n1 && n2>n3)
    printf("%d is greatest\n",n2);
  else
    printf("%d is greatest\n",n3);
 */
 //find greatest of three numbers using conditional operator
// int max = n1>n2 && n2>n3 ? n1 : (n2>n1 && n2>n3 ? n2 : n3);
 int max = (n1>n2) ? (n1>n3 ? n1 : n3) : (n2>n3 ? n2 : n3);
 printf("%d is greatest\n", max);
 return 0;
}
