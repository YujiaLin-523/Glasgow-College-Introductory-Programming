// Program Name:Comupute the tax
// Purpose:Compute the tax using given data //Name:Lin Yujia
#include <stdio.h>

double calculateIncomeTax(double income)
{
    double tax;

    if (income <= 12500)
    {
       tax = 0;
    }
    else if (income <= 14585)
    {
        tax = (income - 12500) * 0.19;
    }
    else if (income <= 25158)
    {
        tax = 2085 * 0.19 + (income - 14585) * 0.20;
    }
    else if (income <= 43430)
    {
        tax = 2085 * 0.19 + 10573 * 0.20 + (income - 25158) * 0.21;
    }
    else if (income <= 150000)
    {
        tax = 2085 * 0.19 + 10573 * 0.20 + 18272 * 0.21 + (income - 43430) * 0.41;
    }
    else
    {
        tax = 2085 * 0.19 + 10573 * 0.20 + 18272 * 0.21 + 106569 * 0.41 + (income - 150000) * 0.46;
    }

    return tax;
}

int main()
{
    double income = 0;

    printf("Enter Gross Income in ￡:");
    scanf("%lf", &income);
    getchar();

    double tax = calculateIncomeTax(income);
    double take_home_salary = income - tax;
    printf("Your Take-home salary is:￡%.2lf\n", take_home_salary);
    printf("The total tax paid is:%.2lf\n", tax);

    getchar();
    return 0;
}