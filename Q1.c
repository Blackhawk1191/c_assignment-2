#include<stdio.h>
//division of two numbers
int main()
{
   int n1,n2;
   float div;
   printf("Enter the numbers");
   scanf("%d%d",&n1,&n2);
   if(n2!=0)
   {
      div =(float) n1/n2;
	  printf("division result=%.3f\n",div);
   }
   else
      printf("input is invalid");
   return 0;

}
