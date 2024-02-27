#include <stdio.h>


int sum_ints(void) {
    int integers[1024] = {1};
    for (int i = 1; i < 1024; ++i) integers[i] = integers[i - 1] + 1;
    printf("Array \"vals2\" has size %zu, and is stored in memory from %p to %p\n",
           sizeof(integers), (void*) &integers[0], (void*) &integers[1023]);
    return integers[1023];

}

double mul_doubles(int init) {
    double doubles[1024] = {init};
    for (int i = 1; i < 1024; ++i) doubles[i] = doubles[i - 1] * 0.999;
    printf("Array \"vals\" has size %zu, and is stored in memory from %p to %p\n",
           sizeof(doubles), (void*) &doubles[0], (void*) &doubles[1023]);
    return doubles[1023];

}

int main(void) {


        double result = mul_doubles(sum_ints());
        printf("Result = %lf\n", result);
         }

/*What are the ranges of memory addresses occupied by both arrays?
Do these ranges of memory addresses overlap?
Does the lifetime of the two arrays overlap? Why (not)? 
How much memory does the program need to store the two arrays? */

/// The ranges occupied by both arrays its the first and the last one 
/// No these ranges do not overlap because each one of the functions has a local array
/// No their lifetime does not overlap because after they are called or used there is new memory created and the previous one is destroyed
/// For the integers it needs 4096 because 1023*4= 4096 bytes
/// For the doubles it needs 8192 because 1023*8 = 8192 bytes
