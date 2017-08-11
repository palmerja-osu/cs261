/* CS261- Assignment 1 - Q.2*/
/* Name: James Palmer
 * Due: 4/10/2016
 * Solution description:
 */

int foo(int* a, int* b, int c) {
	/*Set a to double its original value*/
	*a = 2 * *a;
	/*Set b to half its original value*/
	*b = *b / 2;
	/*Assign a+b to c*/
	c = *a + *b;
	/*Return c*/
	return c;
}

int main() {
	/*Declare three integers x,y and z and initialize them to 5, 6, 7 respectively*/
	int x = 5;
	int y = 6;
	int z = 7;

	/*Print the values of x, y and z*/
	printf("%d %d %d\n", x, y, z);

	/*Call foo() appropriately, passing x,y,z as parameters*/
	int f = foo(&x, &y, z);

	/*Print the values of x, y and z*/
	printf("%d %d %d\n", x, y, z);
	/*Print the value returned by foo*/
	printf("%d\n", f);
	/*Is the return value different than the value of z?  Why?*/
	return 0;
}

/*
* Answer: The return value is DIFFERENT upon return because foo takes the value of z, and in the called foo function
* the taken declared variable c is changed to a different value.
*/
