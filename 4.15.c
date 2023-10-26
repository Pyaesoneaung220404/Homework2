#include <stdio.h>
#include <math.h>

int main() {
	double principal = 5000.0;
	int years = 15;

	for (double rate = 10.0; rate <= 12.0; rate += 0.5) {
		double interestRate = rate / 100.0; 
		double amount = principal * pow(1 + interestRate, years);
		printf("Principal: $%.2lf, Rate: %.1lf%%, Years: %d, Amount: $%.2lf\n", principal, rate, years, amount);
	}

	return 0;
}
