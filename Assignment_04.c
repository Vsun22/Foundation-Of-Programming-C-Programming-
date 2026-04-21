#include <stdio.h>
int main()
{
float basic, hra, ta, gross, tax, net;

printf("Enter Basic Salary: ");
scanf("%f", &basic);

hra = 0.1 * basic;
ta = 0.05 * basic;
gross = basic + hra + ta;
tax = 0.02 * gross;
net = gross - tax;

printf("\nGross Salary = %.2f\n", gross);
printf("Professional Tax = %.2f\n", tax);
printf("Net Salary = %.2f\n", net);
return(0);
}