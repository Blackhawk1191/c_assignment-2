#include<stdio.h>
int main(void)
{	
	float x,y;
	printf("Enter the x and y co-ordinates\n");
	scanf("%f %f", &x, &y);
	if(x>0 && y > 0)
		printf("points are in 1st quadrant\n");
	else if(x<0 && y>0)
		printf("points are in 2nd quadrant\n");
	else if(x<0 && y<0)
		printf("points are in 3rd quadrant\n");
	else if(x>0 && y<0)
		printf("points are in 4th quadrant\n");
	else if(x==0 && y==0)
		printf("point is on origin\n");
	else if(x==0)
		printf("point is on y-axis\n");
	else if(y==0)
		printf("point is on x-axis\n");
	else
		printf("Entered co-ordinates are invalid\n");

	return 0;
}
