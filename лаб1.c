#include <stdio.h>

void way2(float x);
void main()
{
	float x;
	printf("Enter x: ");
	scanf_s("%f", &x);
	way2(x);
}
void way2(float x)
{
	float y;
	if ((x > -15) && (x <= 3))
	{
		y = 4 * x * x + 2;
		printf("Answer : %f\n", y);
	}
	else if ((x <= -30) || (x > 20))
	{
		y = 3 * x * x * x / 4 - 5;
		printf("Answer : %f\n", y);
	}
	else
	{
		printf("no results\n");
	}
}