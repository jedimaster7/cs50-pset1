#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
  /* declare pyramid height variable */
  int pyramidHeight;

  /* ask for pyramidHeight from user, check if is in bounds */
  printf("Welcome to Mario in C\n");
  printf("We are going to make the pyramid Mario has to climb\n");
  printf("How tall do you want the pyramid to be?\n");
  printf("It can be any nonzero number that is less than 23\n");
  printf("Please enter the number here: ");

/*
  int userInput;
  scanf("%d", &userInput);
  if (userInput < 23 && userInput > 0) {
    pyramidHeight = userInput;
  }
  else {
    printf("I said a NONZERO number less than 23");
  }
*/

  /* loop that creates the pyramid */
  for (int i = 0; i < 5; i++) {
    /* print correct amount of spaces */
    for (int j = 0; j < 5-i; j++) {
      printf("%s", " ");
    }
    /* print hashes */
    for (int k = 0; k < i+1; k++) {
      printf("#");
    }
    printf("\n");
  }
}
