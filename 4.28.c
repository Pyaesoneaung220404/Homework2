#include <stdio.h>

int main() {
	int paycode;
	double weeklyPay = 0.0;

	while (1) {
		
		printf("Enter employee's paycode (1 = Manager, 2 = Hourly, 3 = Commission, 4 = Pieceworker, 0 = Exit): ");
		scanf("%d", &paycode);

		if (paycode == 0) {
			
			break;
		}

		switch (paycode) {
		case 1: 
			printf("Enter manager's fixed weekly salary: $");
			scanf("%lf", &weeklyPay);
			break;

			double hourlyWage, hoursWorked;
		case 2:
			printf("Enter hourly worker's hourly wage: $");
			scanf("%lf", &hourlyWage);
			printf("Enter hours worked (up to 40 hours): ");
			scanf("%lf", &hoursWorked);
			if (hoursWorked > 40) {
				weeklyPay = 40 * hourlyWage + (hoursWorked - 40) * 1.5 * hourlyWage;
			}
			else {
				weeklyPay = hoursWorked * hourlyWage;
			}
			break;

			double sales;
		case 3:

			printf("Enter commission worker's gross weekly sales: $");
			scanf("%lf", &sales);
			weeklyPay = 250 + 0.057 * sales;
			break;

			double piecesProduced, ratePerPiece;
		case 4:
			printf("Enter pieceworker's number of pieces produced: ");
			scanf("%lf", &piecesProduced);
			printf("Enter rate per piece: $");
			scanf("%lf", &ratePerPiece);
			weeklyPay = piecesProduced * ratePerPiece;
			break;
		default:
			printf("Invalid paycode. Please enter a valid paycode.\n");
			continue;
		}

		printf("Weekly pay: $%.2lf\n", weeklyPay);
	}

	return 0;
}
