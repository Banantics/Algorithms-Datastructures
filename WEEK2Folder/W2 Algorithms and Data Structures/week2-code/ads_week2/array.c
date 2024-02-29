//
// Created by rgr24 on 15/02/2023.
//

#include "array.h"

// array initialization (TODO: implement)
array_t *array_init(array_t *p_array, size_t capacity) {
    (void) capacity;    // this line is here to avoid having "unused variable" warnings
    return p_array;
}

// function used to create a dynamic array on the heap
array_t *array_create(size_t capacity) {
    return array_init((array_t *) malloc(sizeof(array_t)), capacity);
}

// ensures that the array has the given minimal capacity
// TODO: complete the implementation
void array_reserve(array_t *p_array, size_t min_capacity) {
    size_t capacity = p_array->capacity;
    while (capacity < min_capacity) {
        capacity = (capacity + 1) * 2 /* insert your factor here */ ;
    }
    
    if (capacity != p_array->capacity) {
    p_array = realloc(p_array->data,capacity*sizeof(float))/* reallocate memory, update capacity of array, etc. */
    }
}

// deallocates the memory held by the array's contents
void array_destroy(array_t *pArray) {
    if (pArray != NULL){
        free(pArray->data);
        pArray->data = NULL;
        pArray->count = pArray->capacity = 0;
    }
}

// appends an element to the array (TODO: implement)
void array_append(array_t *arr, float value) {
    (void) arr;
    (void) value;
}

// inserts an element into the array at the given index
// TODO: implement
void array_insert(array_t *arr, size_t index, float value) {
    (void) arr;
    (void) index;
    (void) value;
}

// removes the element at the given index from the array
// TODO: implement
void array_remove(array_t *arr, size_t index) {
    (void) arr;
    (void) index;
}

