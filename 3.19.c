#include <stdio.h>
int main() {
	float loanInDays, interestRate, loanPrinciple;

	printf("Enter Loan Principle:$ ");
	scanf("%f", &loanPrinciple);
	printf("Enter interest rate:$ ");
	scanf("%f", &interestRate);
	printf("Enter term of the loan in days: ");
	scanf("%f", &loanInDays);

	float interestCharge = (loanPrinciple * interestRate * loanInDays) / 365;
	printf("The interest charge: $%.2f\n", interestCharge);

	return 0;
}
