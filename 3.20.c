#include <stdio.h>
float calculateGrossPay(float hoursWorked, float hourlyRate) {
	if (hoursWorked <= 40.0) {
		return hoursWorked * hourlyRate;
	}
	else {
		float regularHours = 40.0;
		float overtimeHours = hoursWorked - 40.0;
		return (regularHours * hourlyRate) + (overtimeHours * hourlyRate * 1.5);
	}
}
int main() {
	int numOfEmployees;
	printf("Enter Number of employees: ");
	scanf("%d", &numOfEmployees);

	for (int i = 1; i < numOfEmployees; i++) {
		char employeeName[100];
		float hoursWorked, hourlyRate, grossPay;
		printf("Enter Name of employee %d: ",i);
		scanf("%s", employeeName);
		printf("Enter hours worked: ");
		scanf("%f", &hoursWorked);
		printf("Enter hourly rate: ");
		scanf("%f", &hourlyRate);

		grossPay = calculateGrossPay(hoursWorked, hourlyRate);

		printf("%s's Salary: $%.2f\n", employeeName, grossPay);
	}
	return 0;

}