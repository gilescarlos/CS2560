/*
 * ReadWrite.c
 *
 *  Created on: Feb 14, 2019
 *      Author: gilescarlos32
 */
#include <stdio.h>

int main() {
	char str[100];
	int i;

	printf("Enter a value : ");
	fflush(stdout);
	scanf("%s %d", str, &i);
	printf( "\nYou entered: %s %d ", str, i);

	return 0;

}

