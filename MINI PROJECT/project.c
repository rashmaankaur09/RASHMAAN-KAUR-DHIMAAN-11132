#include <stdio.h>
// NAME = RASHMAAN KAUR DHIMAAN
// ERP = 11132
int main() {
    float principal, rate, balance, interest;
    int years, i;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    balance = principal;

    for(i = 1; i <= years; i++) {
        interest = (balance * rate) / 100;
        balance = balance + interest;

        printf("Year %d balance = %.2f\n", i, balance);
    }

    printf("\nFinal Balance after %d years = %.2f\n", years, balance);

    return 0;

}
// Enter principal amount: 10000
// Enter rate of interest (in %): 5
// Enter number of years: 3
// Year 1 balance = 10500.00
// Year 2 balance = 11025.00
// Year 3 balance = 11576.25
