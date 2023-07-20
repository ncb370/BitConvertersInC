//Nicole Barrington
//ncb370
//11082099


/*
 * A program that displays the binary representation of input single-precision IEEE 754
 * floating-point values.
 */

/*
 * Standard header files to include
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>

// main - A main function that takes no arguments.
int main()
{
	// A union that allows access to float variable f outside of scope. 
	union test {
		float f;
	} x;

	// A prompt to the user that asks for a float type.
	printf("float to convert: ");
	
	// A loop that takes the float entered by the user,
	// as long as it's a valid input.
	while (scanf("%f", &x.f)==1) {

		// A for loop that writes a 32 bit sequence.
		// In order to print 32 bits, this loop counts down
		// from 31 to 0.
		for (int i = 31; i>=0; i--) {
			
			// Assign a pointer k to the binary value
			// produced by bitshifting the address of
			// the value of the float.
			int k = *(int*)&x.f >> i;

			// If the counter is at 30 or 22,
			// produce a space character.
                        if (i==30 || i==22) {
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
		
		// Prompt the user for new input.
		printf("\nfloat to convert: ");

	
	}


	return 0;  // End of program.

}
