#include <stdio.h>

int main() {
	int accountNumber;
	double beginningBalance, totalCharges, totalCredits, creditLimit;

	printf("Enter account number: ");
	scanf("%d", &accountNumber);
	printf("Enter beginning balance: ");
	scanf("%lf", &beginningBalance);
	printf("Enter total charges: ");
	scanf("%lf", &totalCharges);
	printf("Enter total credits: ");
	scanf("%lf", &totalCredits);
	printf("Enter credit limit: ");
	scanf("%lf", &creditLimit);

	double newBalance = beginningBalance + totalCharges - totalCredits;

	if (newBalance > creditLimit) {
		printf("Account Number: %d\n", accountNumber);
		printf("Credit Limit: %.2lf\n", creditLimit);
		printf("New Balance: %.2lf\n", newBalance);
		printf("Credit limit exceeded.\n");
	}

	return 0;
}
