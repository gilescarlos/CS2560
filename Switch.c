/*
 * Switch.c
 *
 *  Created on: Feb 14, 2019
 *      Author: gilescarlos32
 */
#include <stdio.h>

int main(int argc, char **argv) {
	char grade = 'A';
	switch(grade) {
		case 'A' :
			printf("Excellent!\n" );
	        break;
		case 'B' :
	    case 'C' :
	        printf("Well done\n" );
	        break;
	    case 'D' :
	        printf("You passed\n" );
	        break;
	    case 'F' :
	        printf("Better try again\n" );
	        break;
	    default :
	        printf("Invalid grade\n" );
	}
	printf("Your grade is  %c\n", grade );

	return 0;
}
