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
}