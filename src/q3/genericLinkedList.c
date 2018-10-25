#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"


/*typedef struct listElementStruct{
  char* data;
  size_t size;
  struct listElementStruct* next;
  void (*printFunction)(void* data);
} listElement;*/

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size, printFunction print){
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL){
    //malloc has had an error
    return NULL; //return NULL to indicate an error.
  }
  void* dataPointer = malloc(size);
  if(dataPointer == NULL){
    //malloc has had an error
    free(e); //release the previously allocated memory
    return NULL; //return NULL to indicate an error.
  }
  memmove(data, dataPointer, size);
  e->data = dataPointer;
  e->size = size;
  e->print = print;
  e->next = NULL;
  return e;
}

//Prints out each element in the list
void traverse(listElement* start){
  listElement* current = start;
  while(current != NULL){
    current->print(current->data);
    current = current->next;
  }
}
void printChar(void* data){
  printf("%c\n", *(char*)data);
}

void printInt(void* data){
  printf("%d\n", *(int*)data);
}

void printDouble(void* data){
  printf("%f\n", *(double*)data);
}

void printFloat(void* data){
  printf("%f\n", *(float*)data);
}

void printLong(void* data){
  printf("%ld\n", *(long*)data);
}

void printString(void* data){
  printf("%s\n", data);
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, void* data, size_t size, printFunction print){
  listElement* newEl = createEl(data, size, print);
  listElement* next = el->next;
  newEl->next = next;
  el->next = newEl;
  return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after){
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}

int length(listElement* list){
  int size = 0;

  while(list != NULL){
    ++size;
    list = list->next;
  }
  return size;
}

void push(listElement** list, void* data, size_t size, printFunction print){
  listElement* newEl = createEl(data, size, print);
  newEl->next = *list;
  *list = newEl;
}

listElement* pop(listElement** list){
  listElement *temp = *list;
  *list = temp->next;
  return temp;
}

void enqueue(listElement** list, void* data, size_t size, printFunction print){
  listElement* newEl = createEl(data, size, print);
  newEl->next = *list;
  *list = newEl;
 }

listElement* dequeue(listElement* list){
  listElement *temp = list;

  while((temp->next)->next !=NULL){
    temp = temp->next;
  }

  listElement *tail = temp;
  temp->next = NULL;
  return tail;
}