#include <stdio.h>

int main() {
	double salesInDollar;
	
	printf("Enter Sales In Dollar:$ ");
	scanf("%lf", &salesInDollar);

	float salary = 200 + (0.09*salesInDollar);
	printf("Your Salary: $%2f\n", salary);

	return 0;
}