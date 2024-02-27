
#include <stdio.h>
#include <stdlib.h>


/// This function is used for memory allocation for count
/// @param count the memory we are gonna hold
/// @return It returns the pointer to the allocated memory block
int *allocate_memory(int count);

int main(void) {
    unsigned long *ptr1;
    float *ptr2;


    ptr1 = (unsigned long *) malloc(1 * sizeof(unsigned long));


    ptr2 = (float *) malloc(256 * sizeof(float));

    return 0;
}


int *allocate_memory(int count) {
    int *ptr;
    ptr = (int *) malloc(count * sizeof(int));
    return ptr;
}
