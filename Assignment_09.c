#include <stdio.h>
#include <math.h>

int main()

{
	int num, temp , rem=1, count=0, sum =0;

	printf("Enter Value: ");
	scanf("%d",&num);

	while (num !=0)
	{
		num = num / 10;
		count++;
	}
	
	temp = num;
	while (temp != 0)
	{
		
		rem = temp % 10;
		sum = sum + pow(rem, count);
		temp = temp / 10;
	}
	if (sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
