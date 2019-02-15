/*
 * TypeDef.c
 *
 *  Created on: Feb 14, 2019
 *      Author: gilescarlos32
 */
#include <stdio.h>

typedef int number;
int main() {
	number c;
	printf("Enter a value :");
	fflush(stdout);
	c = getchar();

	printf("\nYou entered: ");
	putchar(c);

	return 0;
}
