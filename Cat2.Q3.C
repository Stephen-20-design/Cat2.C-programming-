#include <stdio.h>

int main() {
    float hours, wage, gross, tax, net;

    // Input hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay with overtime
    gross = (hours <= 40 ? hours : 40) * wage + (hours > 40 ? (hours - 40) * wage * 1.5 : 0);

    // Calculate tax
    tax = (gross <= 600 ? gross * 0.15 : 600 * 0.15 + (gross - 600) * 0.20);

    // Calculate net pay
    net = gross - tax;

    // Output results
    printf("Gross Pay: $%.2f\nTaxes: $%.2f\nNet Pay: $%.2f\n", gross, tax, net);

    return 0;
}
