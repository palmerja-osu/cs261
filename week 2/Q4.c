/* CS261- Assignment 1 - Q.4*/
/* Name: James Palmer
 * Due: 4/10/2016
 * Solution description: Consider the structure student in Q1.c. Modify the above sort(...) function from
		Q.3 to sort an array of n students based on their scores in ascending order.
		The function prototype is void sort(struct student* students, int n).
		The IDs and scores of the students are to be generated randomly (see use of rand()). You can assume that IDs are unique
 */

#include <stdio.h>
#include <stdlib.h>

struct student {
	int id;
	int score;
};

void sort(struct student* students, int n) {
	/*Sort the n students based on their score*/
	int a, b, tmpscore, tmpid;
	for (a = (n - 1); a>0; a--) {
		for (b = 1; b <= a; b++) {
			if (students[b - 1].score > students[b].score) {
				tmpscore = students[b - 1].score;
				tmpid = students[b - 1].id;
				students[b - 1].score = students[b].score;
				students[b - 1].id = students[b].id;
				students[b].score = tmpscore;
				students[b].id = tmpid;
			}
		}
	}
}

int main() {

	int n = 5;

	struct student* students = malloc(5 * (sizeof(struct student)));

	int x;
	for (x = 0; x<n; x++) {
		students[x].id = ((rand() % 10) + 1);
		students[x].score = ((rand() % 100) + 1);
	}


	printf("Unsorted:\n\n");
	for (x = 0; x<5; x++) {
		printf("ID: %d Score: %d\n", students[x].id, students[x].score);
	}

	/*Pass this array along with n to the sort() function*/
	sort(students, n); printf("\n");




	printf("Sorted:\n\n");
	for (x = 0; x<5; x++) {
		printf("ID: %d Score: %d\n", students[x].id, students[x].score);
	}

	return 0;
}
