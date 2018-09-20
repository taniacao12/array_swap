// Tania Cao pd5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int array[10];
	srand(time(NULL));
	for (int num = 0; num < 9; num++)
		array[num] = rand();
	array[9] = 0;
	
	printf("Array of integers: \n");
	for (int num = 0; num < 10; num++)
		printf("array[%d]: %d\n", num, array[num]);

	int parray[10];
	int *pointer = &array[9];
	for (int num = 0; pointer >= array; num++,pointer--)
		parray[num] = *pointer;
	
	printf("\nArray of pointers: \n");
	for (int num = 0; num < 10; num++)
		printf("parray[%d]: %d\n", num, parray[num]);

	return 0;
}
