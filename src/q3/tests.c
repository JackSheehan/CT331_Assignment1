#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");

  // Testing Char -- 
  char letter = "J";
  listElement *test = createEl(&letter, sizeof(char), &printChar);
  length(test);
  printf("Length of list at beginning: %d\n", length(test));
  //traverse(test);

  //Testing String --
  char string[] = "Hello";
  listElement *test2 = insertAfter(test, &string, sizeof(string), &printString);
  length(test2);
  printf("Length of list after adding String: %d\n", length(test));
  //traverse(test);

  //Testing int -- 
  int i = 10;
  listElement *test3 = insertAfter(test2, &i, sizeof(i), &printInt);
  length(test3);
  printf("Length of list after adding int: %d\n", length(test));
  //traverse(test);

  double d = 101.10;
  insertAfter(test3, &d, sizeof(d), &printDouble);
  length(test3);
  printf("Length of list after adding double: %d\n", length(test));
  //traverse(test);

  float f = 123.445;
  insertAfter(test3, &f, sizeof(f), &printFloat);
  length(test3);
  printf("Length of list after adding float: %d\n", length(test));
 // traverse(test);

  long ld = 102.345;
  insertAfter(test3, &ld, sizeof(ld), &printLong);
  length(test3);
  printf("Length after adding long: %d\n", length(test));
  traverse(test);

  printf("\nTests complete.\n");
}
