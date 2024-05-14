#include <stdio.h>

int main() {
    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float grossSalary, hra, da, ta;

    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);
    printf("Enter the percentage of HRA: ");
    scanf("%f", &hraPercentage);
    printf("Enter the percentage of DA: ");
    scanf("%f", &daPercentage);
    printf("Enter the percentage of TA: ");
    scanf("%f", &taPercentage);

    hra = (hraPercentage / 100) * baseSalary;
    da = (daPercentage / 100) * baseSalary;
    ta = (taPercentage / 100) * baseSalary;

    grossSalary = baseSalary + hra + da + ta;

    printf("The gross salary is: %.2f\n", grossSalary);

    return 0;
}
