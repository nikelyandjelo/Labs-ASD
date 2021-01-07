#include <stdio.h>
#include <math.h>

int way1(float x);
int way2(float x);

void main()
{
	float x;
	printf("Enter x: ");
	scanf_s("%f", &x);
	way1(x);
	way2(x);
}

int way1(float x)
{
	float y;

	if (x > -15)
	{
		if (x <= 3)
		{
			y = 4 * pow(x, 2) + 2;
			printf("Answer : %f\n", y);

			return 0;
		}

	}
	if (x < -30)
	{
		y = 3 * pow(x, 3) / 4 - 5;
		printf("Answer : %f\n", y);
	}
	else if (x > 20)
	{
		y = 3 * pow(x, 3) / 4 - 5;
		printf("Answer : %f\n", y);
	}
	else
	{
		printf("no results\n");
	}
	return 0;
}

//2 спосіб з використанням булевих(логичних) операцій

int way2(float x)
{
	float y;

	if ((x > -15) && (x <= 3))
	{
		y = 4 * pow(x, 2) + 2;
		printf("Answer : %f\n", y);
	}
	else if ((x <= -30) || (x > 20))
	{
		y = 3 * pow(x, 3) / 4 - 5;
		printf("Answer : %f\n", y);
	}
	else
	{
		printf("no results\n");
	}
	return 0;
}










//and-&&,or-||,not-!








