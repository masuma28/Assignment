#include <stdio.h>
int main()
    float basic, gross, da, hra;
printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);
    if(basic <= 10000)
        da  = basic * 80%;
        hra = basic * 20%;
    else if(basic <= 20000)
        da  = basic * 90%;
        hra = basic * 25%;
    else
        da  = basic * 95%;
        hra = basic * 30%;
    gross = basic + hra + da;
    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
    return 0;
