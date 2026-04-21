#include <stdio.h>
int main()
{
	int a, b, result;
	char choice;
	printf("Calculator Operation: \n+, -, *, /\n");
	printf("Enter an operator: ");
	scanf(" %c",&choice);
	printf("Enter Your First Number: ");
	scanf("%d",&a);
	printf("Enter Your Second Number: ");
	scanf("%d",&b);

	switch(choice)
	{
	case '+': result = a + b;
			  printf("%d\n",result);
			  break;

	case '-': result = a - b;
			  printf("%d\n",result);
			  break;

	case '*': result = a * b;
			  printf("%d\n",result);
			  break;

	case '/': 
		if (b != 0) 
		{
                result = a / b; // Use division operator
                printf("%d\n", result);
        } 
        else 
        {
                printf("Division is not possible\n");    
        }
            break;
	default: 
            printf("Invalid operator\n");
            break;   
    } 
return 0;
}