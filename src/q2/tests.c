#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("Test String (1).", 30);
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  traverse(l);
  length(l);
  printf("%d", length(l));
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  length(l);
  printf("%d", length(l));
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");
  length(l);
  printf("%d", length(l));
  printf("\nTests complete.\n");
  printf("\n");

  //Testing LinkedList stack
  listElement* testQueue = createEl("Queue1", 30);
  length(testQueue);
  printf("%d \n", length(testQueue));
  push(&testQueue, "Queue2", 30);
  push(&testQueue, "Queue3", 30);
  traverse(testQueue);
  pop(testQueue);
  traverse(testQueue);
  length(testQueue);
  printf("%d \n", length(testQueue));


 //Testing LinkedList queue
  listElement* stack = createEl("Stack1.", 30);
  length(stack);
  printf("%d", length(stack));
  enqueue(&stack, "Stack2", 30);
  enqueue(&stack, "Stack3", 30);
  traverse(stack);
  dequeue(stack);
  traverse(stack);
  length(stack);
  printf("%d", length(stack));
}
