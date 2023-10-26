#include <stdio.h>

int main() {
	int n = 9; 

	if (n % 2 == 0) {
		printf("Number of rows should be odd for a proper diamond.\n");
		return 1;
	}

	int i, j, space;

	
	for (i = 1; i <= n / 2 + 1; i++) {
		for (space = 1; space <= n / 2 - i + 1; space++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	
	for (i = n / 2; i >= 1; i--) {
		for (space = 1; space <= n / 2 - i + 1; space++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
