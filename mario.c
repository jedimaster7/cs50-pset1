/*
  Mario in C for CS50 problem set 1
  made using only standard libraries for C
  it can now run without using cs50.h
  ©Andrew Tolan 2015
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
  // declare pyramid height variable
  int pyramidHeight;

  // ask for pyramidHeight from user, check if is in bounds
  printf("  Welcome to Mario in C\n");
  printf("  We are going to make the pyramid Mario has to climb\n");
  printf("  How tall do you want the pyramid to be?\n");
  printf("  It can be any number between 1 and 23\n");

  // asks for input and checks bounds
  do {
    printf("  Please enter the number here: ");
    scanf("%d", &pyramidHeight);
  } while (pyramidHeight < 1 || pyramidHeight > 23 || pyramidHeight == 0);

  // loop that creates the pyramid
  for (int i = 0; i < pyramidHeight; i++) {
    // print correct amount of spaces
    for (int j = 0; j < pyramidHeight-i; j++) {
      printf("%s", " ");
    }
    // print hashes 
    for (int k = 0; k < i+1; k++) {
      printf("#");
    }
    printf("\n");
  }
}
