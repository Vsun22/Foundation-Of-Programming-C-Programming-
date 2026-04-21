#include <stdio.h>

int factorial(int num)
{
    int result = 1; 
    for (int i = 1; i <= num; i++)
    { 
        result = result * i;
    }
    return result;
}

int resfactorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    } 
    else 
    {
        return num * resfactorial(num - 1); 
    }
}

int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num); 
    printf("%d\n", factorial(num)); 
    printf("%d\n", resfactorial(num)); 
    return 0; 
}
