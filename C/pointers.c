#include <stdio.h>

void printAge(int *pAge)
{
	printf("You are %d years old\n", *pAge); //dereference
}

int main()
{
	// pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
	//           some tasks are performed more easily with pointers
	//           * = indirection operator (value at address)

	int age = 21;
	int *pAge = &age;

      int **pPage = &pAge;
	int ***pPpage = &pPage;
	int ****pPppage = &pPpage;
	int *****pPpppage = &pPppage;
	int ******pPppppage = &pPpppage;
	printf("You are %d years old\n", ****pPppage);
    //printAge(pAge);

	//printf("address of age: %p\n", &age);
	//printf("value of pAge: %p\n", pAge);
	//printf("size of age: %d bytes\n", sizeof(age));
	//printf("size of pAge: %d bytes\n", sizeof(pAge));
	//printf("value of age: %d\n", age);
	//printf("value at stored address: %d\n", *pAge); //dereferencing

	return 0;
}