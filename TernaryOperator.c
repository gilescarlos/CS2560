/*
 * TernaryOperator.c
 *
 *  Created on: Feb 14, 2019
 *      Author: gilescarlos32
 */
#include <stdio.h>

int main(int argc, char **argv) {
	int a , b;

	a = 10;
	printf( "Value of b is %d\n", (a == 1) ? 20: 30 );
	printf( "Value of b is %d\n", (a == 10) ? 20: 30 );

	return 0;
}

