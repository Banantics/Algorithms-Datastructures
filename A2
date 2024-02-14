#include <stdio.h>

int sum_ints(void) {
    int integers[1024] = {1};
    for (int i = 1; i < 1024; ++i) integers[i] = integers[i - 1] + 1;
    printf("Array \"integers\" has size %zu, and is stored in memory from %p to %p\n",
           sizeof(integers), (void *) &integers[0], (void *) &integers[1023]);
    return integers[1023];

}

double mul_doubles(void) {
    double doubles[1024] = {sum_ints()};
    for (int i = 1; i < 1024; ++i) doubles[i] = doubles[i - 1] * 0.999;
    printf("Array \"doubles\" has size %zu, and is stored in memory from %p to %p\n",
           sizeof(doubles), (void *) &doubles[0], (void *) &doubles[1023]);
    return doubles[1023];
}


int main(void) {
    double result = mul_doubles();


    printf("Result = %lf\n", result);
    return 0;


}

/*What are the ranges of memory addresses occupied by both arrays?
• Do these ranges of memory addresses overlap?
• Does the lifetime of the two arrays overlap? Why (not)?
• How much memory does the program need to store the two arrays?*/

 /// The ranges occupied by the two arrays are the first one and the last one
 /// No the ranges of the memory addresses do not overlap becuase they are diffrent functions and diffrent local arrays
 /// No because everything is inside the scope of the two functions
 /// For the integers it needs 4096 because 1023*4= 4096 bytes
 /// For the doubles it needs 8192 because 1023*8 = 8192 bytes
