#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int change=0;
    float *grades = NULL;
    size_t capacity = 1024;
    for (int count = 0; count < 10000; capacity += 1024, ++count) {
        float *new_grades = (float*) realloc(grades, sizeof(float[capacity]));
        if (new_grades != NULL){
            
            if(grades != new_grades) change++;
           
            grades = new_grades; // make the new block the current block
        }
    }
    printf("stuff changed %d times \n",change);

    
 }
