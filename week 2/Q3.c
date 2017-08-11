/* CS261- Assignment 1 - Q.3*/
/* Name: James Palmer
 * Due: 4/10/2016
 * Solution description: Create an array of 20 random numbers and correctly sort the array
 */

#include <stdio.h>


void sort(int* number, int n) {
	/*Sort the given array number , of length n*/
	int a, b, tmp;

	for (a = (n - 1); a>0; a--) {
		for (b = 1; b <= a; b++) {
			if (number[b - 1] > number[b]) {
				tmp = number[b - 1];
				number[b - 1] = number[b];
				number[b] = tmp;
			}
		}
	}
}

int main() {
	/*Declare an integer n and assign it a value of 20.*/
	int i, n = 20;

	/*Allocate memory for an array of n integers using malloc.*/
	int *array = malloc(n*sizeof(int));

	/*Fill this array with random numbers, using rand().*/
	for (i = 0; i<n; i++) {
		array[i] = rand();
	}

	/*Print the contents of the array.*/
	for (i = 0; i<n; i++) {
		printf("Unsorted Array: %d", array[i]);
		printf("\n");//whitespace
	}

	/*Pass this array along with n to the sort() function of part a.*/
	sort(array, n);

	printf("\n");

	/*Print the contents of the array.*/
	for (i = 0; i<n; i++) {
		printf("Sorted Array: %d", array[i]);
		printf("\n"); //whitespace
	}
	free(array);

	return 0;
}
