#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef void (*printFunction)(void* data);

typedef struct listElementStruct{
  void* data;
  size_t size;
  struct listElementStruct* next;
  printFunction print;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size, printFunction);

void printString(void* data);
void printInt(void* data);
void printFloat(void* data);
void printChar(void* data);
void printLong(void* data);
void printDouble(void* data);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, void* data, size_t size, printFunction);

//Delete the element after the given el
void deleteAfter(listElement* after);

//Returns the number of elements inside the list.
int length(listElement* list);

//Pushes a new element to the head of the list.
void push(listElement** list, void* data, size_t size, printFunction);

//Removes the head element from the list.
listElement* pop(listElement** list);

//Enqueue a new element into head of list.
void enqueue(listElement** list, void* data, size_t size, printFunction); 

listElement* dequeue(listElement* list);
#endif
