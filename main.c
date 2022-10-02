#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char unit;
float temp;

// C to F
void ctof() {
	printf("\nType the degree in C: ");
	scanf("%f", &temp);
	temp = (temp * 1.8) + 32;
	printf("\nThe temp is: %.1f\n", temp);
}

// F to C
void ftoc() {
	printf("\nType the degree in F: ");
	scanf("%f", &temp);
	temp = (temp - 32) * 0.5556;
	printf("The temp is: %.1f\n", temp);
}

int main() {
	printf("Is the temp in C or F?: ");
	scanf("%c", &unit);
	unit = toupper(unit);

	// Checks if unit in C or F?
	if (unit == 'C') {
		ctof();
	} else if (unit == 'F') {
		ftoc();
	} else {
		printf("\nInvalid output.");
		exit(0);
	}
}
