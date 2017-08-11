/* CS261- Assignment 1 - Q.1*/
/* Name: James Palmer
 * Due: 4/10/2016
 * Solution description: write a program that allocates memory for 10 students
	and returns the pointer
 */

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct student {
	int id;
	int score;
};

struct student* allocate() {
	/*Allocate memory for ten students*/
	struct student* a = malloc(10 * (sizeof(struct student)));
	/*return the pointer*/
	return a;
}

void generate(struct student* students) {
	/*Generate random ID and scores for ten students, ID being between 1 and 10, scores between 0 and 100*/
	int x;
	printf("ID Score \n");
	for (x = 0; x<10; x++) {
		students[x].id = ((rand() % 10) + 1);
		students[x].score = (rand() % 100 + 1);
	}
}

void output(struct student* students) {
	/*Output information about the ten students in the format:
	ID1 Score1
	ID2 score2
	ID3 score3
	...
	ID10 score10*/
	int x;
	for (x = 0; x<10; x++) {
		printf("ID%d Score%d \n", students[x].id, students[x].score);
	}
}

void summary(struct student* students) {
	/*Compute and print the minimum, maximum and average scores of the ten students*/
	int i, sum = 0, avg = 0, min = 100, max = 0;

	/*Max*/
	for (i = 0; i<10; i++) {
		if (students[i].score>max) {
			max = students[i].score;
		}
	}

	/*Min*/
	for (i = 0; i<10; i++) {
		if (students[i].score<min) {
			min = students[i].score;
		}
	}

	/*Avg*/
	for (i = 0; i<10; i++) {
		sum = sum + students[i].score;
	}
	avg = sum / 10;

	printf("The minimum score is: %d \n", min);

	printf("The maximum score is: %d \n", max);

	printf("The average score is: %d \n", avg);


}

void deallocate(struct student* stud) {
	/*Deallocate memory from stud*/
	free(stud);
}

int main() {
	struct student* stud = NULL;

	/*call allocate*/
	stud = allocate();
	/*call generate*/
	generate(stud);
	/*call output*/
	output(stud);
	/*call summary*/
	summary(stud);
	/*call deallocate*/
	deallocate(stud);
	return 0;
}
