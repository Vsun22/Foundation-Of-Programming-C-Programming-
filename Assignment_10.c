#include <stdio.h>

void main() {
    char op;
    int num1, num2;
    printf("Calculator Operation:\n");
    printf("+ , - , * , / , ^ , !\n");
    printf("Enter an operator: ");
    scanf(" %c", &op); 
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);
    
    switch(op) {
        case '+':
            printf("Result = %.2f\n", (num1 + num2));
            break;
        case '-':
            printf("Result = %.2f\n", (num1 - num2));
            break;
        case '*':
            printf("Result = %.2f\n", (num1 * num2));
            break;
        case '/':
            if(num2 == 0) {
                printf("Numbers cannot be 0 for division\n");
            } else {
                printf("Result = %.2f\n", (num1 / (float)num2));
            break;
        case '^':
            int result = 1; 
            for(int i = 0; i < num2; i++) {
                result *= num1;
            }
            printf("Result = %d\n", result);
            break;
        case '!':
        	 {
                int result = 1;
                for (int i = 1; i <= num1; i++) {
                    result *= i;
                }
                printf("Result = %d\n", result);
            }
            break;
        default:
            printf("Incorrect input!\n");
            break;
    }

}
}