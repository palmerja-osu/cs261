/* CS261- Assignment 2 - Q. 0*/
/* Name:James Palmer
 * Date: 1/21/2016
 * Description:
 *  Part 1) Implementation of Dynamic Array, Stack, and Bag
 *  Part 2) Part 2: Amortized Analysis of the Dynamic Array (written)
 *  Part 3) Application of the Stack
 */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "dynArray.h"

int main(){
    //declare variables
    int i, j, k, num;
    int selection; //user selection

    struct DynArr *array = newDynArr(10);

    for(i = 0; i < array->capacity; i++){
            addDynArr(array, rand() % 100 + 1);
        }
    printf("\nMAIN MENU\n");
    while(1){

        printf("\n");
        for(i = 0; i < array->size; i++){
            printf("index %d = %d \n",i, array->data[i]);
        }


        printf("\nCapacity = %d \n", array->capacity);
        printf("Size = %d \n", sizeDynArr(array));

        printf("Enter a number from 1-8 from the following options:");
        printf("\n 1)Push\n");
        printf("\n 2)Pop\n");
        printf("\n 3)Remove\n");
        printf("\n 4)Swap\n");
        printf("\n 5)Put\n");
        printf("\n 6)Top\n");
        printf("\n 7)Get\n");
        printf("\n 8)Contains\n");
        scanf("%d \n", &selection);


        switch (selection){

            case 1:
                printf("\n");
                printf("Enter two numbers to swap:\n");
                printf("index i = ");
                scanf("%d", &j);
                printf("index j = ");
                scanf("%d", &k);
                swapDynArr(array, j, k);
                printf("\n");
                break;       //learned that you have to break every switch or all 1-8 options are being read

            case 2:
                printf("\n");
                printf("Which number do you want to remove. Must be an existing number location\n");
                printf("index # = ");
                scanf("%d", &num);
                removeAtDynArr(array, num);
                printf("\n");
                break;

            case 3:
                num = rand() % 100 + 1;
                pushDynArr(array, num);
                break;

            case 4:
                printf("\n");
                printf("Enter desired location of number\n");
                printf("Value = ");
                scanf("%d", &num);
                printf("index = ");
                scanf("%d", &k);
                putDynArr(array, k, num);
                printf("\n");
                break;

            case 5:
                printf("\n");
                printf("%d is the number currently at the top of the stack\n", topDynArr(array));
                printf("\n");
                break;

            case 6:
                printf("\n");
                printf("What index number would you like to see?\n");
                printf("index = ");
                scanf("%d", &num);
                printf("\n");
                printf("%d number is located at location %d", getDynArr(array, num), num);
                printf("\n");
                break;

            case 7:
                printf("\n");
                printf("What number are you looking for?\n");
                printf("Value = ");
                scanf("%d", &num);
                printf("\n");
                if(containsDynArr(array, num) >= 0){
                    printf("%d number was found at location %d", num, (containsDynArr(array, num)));
                }
                else if(containsDynArr(array, num) < 0){
                    printf("%d ERROR!! ERROR!! Number you are looking for does not exist :( \n", num);
                }

                break;

            case 8:
                popDynArr(array);
                break;
        }
    }
    deleteDynArr(array);
    return 0;

}
