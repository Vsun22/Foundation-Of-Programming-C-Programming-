#include <stdio.h>

int main() 
{
    int num, rev = 0, temp, count = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) 
    {
        temp = temp / 10;
        count++; 
    }
    
    temp = num; 
    for (int i = 0; i < count; i++)
    {
        rev = rev * 10 + (temp % 10); 
        temp = temp / 10; 
    }

    printf("Reversed number: %d\n", rev); 
    return 0;
}
