#include<stdio.h>
int main()
{
    float tax = 0, income;

    printf ("enter your income \n");
    scanf ("%f", &income);
if (income<1,50,000)
    printf("no tax");
if (1,50,000<=income<=300,000)
    {
        tax = tax + 0.1 * (income-1500);
    }
    printf("income",%f);

    if (3,00,001<=income<=500,000)
    {
        tax = tax + 0.2 * (income-1000);
    }

    return 0;
}
