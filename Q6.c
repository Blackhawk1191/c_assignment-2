#include<stdio.h>
int main()
{
  int num,rev=0,temp,rem;
  printf("Enter the number to find its palindrome\n");
  scanf("%d",&num);
  temp=num;
  Here:
  if(num!=0)
  {
    rem= num%10;
	rev = rev*10+rem;
	num/=10;
	
  }
  if(num!=0)
     goto Here;
  printf("Palindrome number =%d\n", rev);
  return 0;
}
