//
// Created by rgr24 on 15/02/2023.
//

#ifndef ADS_WEEK2_ARRAY_H
#define ADS_WEEK2_ARRAY_H

#include <stdlib.h>

// array structure definition
typedef struct array
{
    size_t capacity;
    size_t count;
    float *data;
} array_t;

// array initialization (TODO: implement in array.c)
array_t* array_init(array_t *p_array, size_t capacity);

// function used to create a dynamic array on the heap
array_t* array_create(size_t capacity);

// ensures that the array has the given minimal capacity
// TODO: complete the implementation (in array.c)
void array_reserve(array_t *p_array, size_t min_capacity);

// appends an element to the array (TODO: implement in array.c)
void array_append(array_t * arr, float value);

// inserts an element into the array at the given index
// TODO: implement in array.c
void array_insert(array_t * arr, size_t index, float value);

// removes the element at the given index from the array
// TODO: implement
void array_remove(array_t * arr, size_t index);

// deallocates the memory held by the array's contents
void array_destroy(array_t *pArray);

#endif //ADS_WEEK2_ARRAY_H
