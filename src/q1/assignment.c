#include <stdio.h>

int main(int arg, char* argc[]){

	int i = sizeof(i);
	int* j = sizeof(j);
	double* k = sizeof(k);
	long l = sizeof(l);
	char** c = sizeof(c);

  printf("Int size %d \n", i);
  printf("Int pointer size %d \n", j);
  printf("double pointer size %d \n", k);
  printf("long size %ld \n", l);
  printf("char size %d \n", c);

  return 0;

  /*Prints out:
  Int size 4 
  Int pointer size 8 
  double pointer size 8 
  long size 8 
  char size 8 */
}