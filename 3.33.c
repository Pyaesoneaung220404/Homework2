#include <stdio.h>

int main() {
	int length = 3;
	int breadth = 12;

	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= breadth; j++) {
			if (i == 1 || i == length || j == 1 || j == breadth) {
				
				printf("*");
			}
			else {
				
				printf(" ");
			}
		}
		printf("\n"); 
	}

	return 0;
}
