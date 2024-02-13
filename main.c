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
Does the lifetime of the two arrays overlap? Why (not)? no they dont but explain it Onno
How much memory does the program need to store the two arrays? */

/// 1 The size of both
