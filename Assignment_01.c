#include <stdio.h>

int main()
{
	int year;

	printf("Enter The Year --> ");
	scanf("%d",&year);

	if (year%400==0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not Leap Year");
	}
}