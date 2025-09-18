#include <stdio.h>

long sum (int addends[], int count) {
	long c = 0;
	for (int i = 0; i < count; i++) { 
		c = addends[i] + c;
	}
	return c;
}

int main (void) {
	// main loop
	for (;;) {
		//which type of operation
		char operation;
		printf("Which operation?\n");
	       	printf("Sum: 'S'\n");
		printf("Subtract: 's'\n");
		printf("Multiplication: 'M'\n");
		printf("Division: 'd'\n");
		scanf(" %c", &operation);
		//various operations
		if (operation == 'S') {
			int addends[20];
			int count;
			printf("Addends: ");
			//get addends
			//store addends in an array, give array to sum function to get the sum
			for (int i = 0; i < 20; i++) {
				scanf(" %d", &addends[i]);
				if (addends[i] == 0) {
					count = i;
					break;
				}
			}
			long result = sum(addends, count);
			printf("The result is: %ld\n", result);
		}
	}
}
