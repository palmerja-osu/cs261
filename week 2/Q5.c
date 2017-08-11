/* CS261- Assignment 1 - Q.5*/
/* Name: James Palmer
 * Due: 4/10/2016
 * Solution description: Write a function void sticky(char* word) where word is a single word such as “sticky” or “RANDOM”.
		 sticky() should modify the word to appear with “sticky caps”
 */

#include <stdio.h>
#include <stdlib.h>

/*converts ch to upper case, assuming it is in lower case currently*/
char toUpperCase(char ch){
     return ch-'a'+'A';
}

/*converts ch to lower case, assuming it is in upper case currently*/
char toLowerCase(char ch){
     return ch-'A'+'a';
}

/*Convert to sticky caps*/
void sticky(char* word){

     int i;
     for(i=0; word[i] != '\0'; i++){
        if(word[i]>='a'&&word[i] <='z'){
            word[i] = toUpperCase(word[i]);
        }
     }

     for(i=1;word[i]!= '\0'; i=i+2){
        word[i] =toLowerCase(word[i]);
     }
}

int main(){
    /*Read word from the keyboard using scanf*/
    char word[300];

    printf("Enter one word consisting of the characters a through z: ");
    scanf("%s", word);

    sticky(word);


    printf("%s \n", word);

    return 0;
}
