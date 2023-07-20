//Nicole Barrington
//ncb370
//11082099

/* 
 * A program that displays the binary representation of input signed integer values.
 */

/*
 * Standard header files to include
 */

#include <stdio.h>
#include <stdbool.h> // for true,false
#include <stdlib.h> // for NULL, malloc()
#include <string.h> // for strlen(), strcmp(), strcpy()
#include <strings.h> // for STRING(3)

// main - A main function that takes no arguments.
int main()
{	
	// A signed int variable that will be read in.
	signed int signed_integer;

	// An int variable.
	int k;

	// Initial output prompt
	printf("number to convert: ");	

	// Check conditions in while loop
	while (scanf("%i", &signed_integer)==1) {		

		// A loop that writes a 32 bit sequence.
		// In order to print 32 bits, this loop counts down
		// from 31 to 0.
		for (int i=31; i>=0; i--) {
					
				
			// Assign k to the binary value produced 
			// by bitshifting the integer entered by
			// the user.
			k = abs(signed_integer) >> i;
			
			// If negative value, do two's complement.
			if (signed_integer < 0) {
				if (i==31) {
					printf("1");
					i--; // reset i
					k = abs(signed_integer) >> i; // reset k
				}
				 // Print spaces at these points.
                        	if (i==7 || i==15 || i==23) {
                                	printf(" ");
                        	}
                        
                        	// If the bit is a 1, print 1.
                        	if (k & 1) {
                                	printf("1");
                        	}
                        
                        	// Otherwise, print a 0.
                        	else {
                                	printf("0");
                       		}
			
			}
			
			// If not a negative value, shift normally.
			else {			
			
				// Print spaces at these points.
				if (i==7 || i==15 || i==23) {
					printf(" ");
				}
			
				// If the bit is a 1, print 1.
				if (k & 1) {
					printf("1");
				}
			
				// Otherwise, print a 0.
				else {
					printf("0");
				}
			}

		}
		// Prompt the user for new input.
		printf("\nnumber to convert: ");
		
	}
	return 0; // Finish running program
}
