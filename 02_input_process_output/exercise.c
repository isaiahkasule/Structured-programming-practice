#include <stdio.h>
#include <stdlib.h>

int main()
{
    float monthly_income, needs, wants, savings;
    printf("Enter monthly income (UGX): ");
    scanf("%f", &monthly_income);

    needs = monthly_income * 0.50;
    wants = monthly_income * 0.30;
    savings = monthly_income * 0.20;

    printf("\nNeeds: UGX %.2f\n", needs);
    printf("Wants: UGX %.2f\n", wants);
    printf("Savings: UGX %.2f\n", savings);

    return 0;
}
