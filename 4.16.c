#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int i, j, n, m;
	printf("(A)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	i = 1;
	j = 10;
	n = 10;
	for (i = 1; i <= 10; i++) {
		for (j = n; j >= 1; j--) {
			printf("*");
		}
		n = n - 1;
		printf("\n");
	}
	i = 1;
	j = 10;
	n = 10;
	m = 1;
	printf("(C)\n");
	for (i = 1; i <= 10; i++) {
		if (i == 1) {
			for (j = 10; j >= 1; j--) {
				printf("*");
			}
		}
		else {
			for (m = 1; m <= i - 1; m++) {
				printf(" ");
			}
			for (j = 10 - i + 1; j >= 1; j--) {
				printf("*");
			}
		}
		printf("\n");
	}
	i = 1;
	j = 10;
	n = 10;
	m = 1;
	printf("(D)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 10 - i; j >= 1; j--) {
			printf(" ");
		}
		for (m = 1; m <= i; m++) {
			printf("*");
		}
		printf("\n");
	}

}