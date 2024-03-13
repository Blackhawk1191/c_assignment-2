#include<stdio.h>
int main(void)
{
 int quant;
 float price;
 printf("Enter the number of the product\n");
 scanf("%d",&quant);
 if(quant>30 && quant<50)
 {
   price = 5* 0.90 * quant;
   printf("Total price of %d product = %f\n", quant,price);
 }
 else if(quant > 50)
 {
   price = 5 * 0.85 * quant;
   printf("Total price of %d product = %f\n", quant,price);
 }
 else
   printf("No valid input\n");
 return 0;
}
