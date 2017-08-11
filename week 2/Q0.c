/* CS261- Assignment 1 - Q. 0*/
/* Name:James Palmer
 * Due: 4/10/2016
 * Solution description: Basic ipr pointer to a function and return
 */

#include <stdio.h>
#include <stdlib.h>

void fooA(int* iptr) {
	/*Print the value pointed to by iptr*/
	printf("The value of iptr: %d \n", *iptr);
	/*Print the address pointed to by iptr*/
	printf("The address pointed to by *iptr: %p \n", iptr);
	/*Print the address of iptr itself*/
	printf("The address of iptr itself: %p \n", &iptr);
}

int main() {

	/*declare an integer x*/
	int x;
	/*print the address of x*/
	printf("The address of x: %p \n", &x);
	/*Call fooA() with the address of x*/
	fooA(&x);
	/*print the value of x*/
	printf("The value of x: %d \n", x);
	return 0;
}
