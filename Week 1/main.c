#include <stdio.h>

int main(){

        int num, choice;   //declare variables
        float in = 0;
        float cm = 0;

        printf("Lets convert a number from inches to centimeters.\n");

        printf("Enter Desired number to convert.\n"); //option text
        scanf("%d", &num); //take user number


        printf("Enter (1) to convert to centimeters\n"); //option menu
        printf("Enter (2) to convert to inches\n");
        scanf("%d", &choice);

        //if statement for user desired conversion
        if(choice == 1){
                cm = num *2.54;  //set num to cm, output cm
                printf("%.2f cm\n", cm);
        }
        else if (choice == 2){
                in = num / 2.54;
                printf("%f in\n", in);
        }
        else
                printf("Error, Option not found,  Please Try again\n\n");

        return 0;
}
