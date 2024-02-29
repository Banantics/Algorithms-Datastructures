//
// Created by rgr24 on 15/02/2023.
//

#include <stdio.h>
#include "test_array.h"

void test_array_append(void) {
    array_t array;
    array_init(&array, 0);	// initialize array with capacity of 0
    array_append(&array, 1.0f);	// append an element
    assert(array.count == 1);	// count must now be one
    assert(array.capacity >= array.count);	// capacity must be sufficient
    assert(array.data[0] == 1.0f);	// element was stored at index 0

    array_append(&array, 2.0f);	// append another element
    assert(array.count == 2);	// count must now be two
    assert(array.capacity >= array.count);	// capacity must be sufficient
    assert(array.data[0] == 1.0f);	// first element has not changed
    assert(array.data[1] == 2.0f);	// new element was stored at index 1
    array_destroy(&array);
    fputs("test_array_append PASSED\n", stderr);
}

void test_array_insert(void) {
    array_t array;
    array_init(&array, 0);	// initialize array with capacity of 0
    array_insert(&array, 0, 1.0f);	// insert an element at the end
    assert(array.count == 1);	// count must now be one
    assert(array.capacity >= array.count);	// capacity must be sufficient
    assert(array.data[0] == 1.0f);	// element was stored at index 0

    array_insert(&array, 0, 2.0f);	// insert in front of array
    assert(array.count == 2);	// count must now be two
    assert(array.capacity >= array.count);	// capacity must be sufficient
    assert(array.data[0] == 2.0f);	// inserted element is at index 0
    assert(array.data[1] == 1.0f);	// previously inserted element is now at index 1

    array_insert(&array, 1, 3.0f);	// insert at index 1
    assert(array.count == 3);	// count must now be three
    assert(array.capacity >= array.count);	// capacity must be sufficient
    assert(array.data[0] == 2.0f);	// element at index 0 has not changed
    assert(array.data[1] == 3.0f);	// inserted element is at index 1
    assert(array.data[2] == 1.0f);	// value 1.0 has shifted to index 2

    array_insert(&array, 0, 4.0f);	// insert at index 0
    assert(array.count == 4);	// count must now be four
    assert(array.capacity >= array.count);	// capacity must be sufficient
    assert(array.data[0] == 4.0f);	// inserted element is at index 0
    assert(array.data[1] == 2.0f);	// 2.0f has shifted to index 1
    assert(array.data[2] == 3.0f);	// 3.0f has shifted to index 2
    assert(array.data[3] == 1.0f);	// 1.0f has shifted to index 3
    array_destroy(&array);
    fputs("test_array_insert PASSED\n", stderr);
}

void test_array_remove(void) {
    array_t array;
    array_init(&array, 5);	// initialize array with capacity of 5
    // set contents to {0.0f, 1.0f, 2.0f, 3.0f, 4.0f}
    for (int i = 0; i < 5; ++i) array_append(&array, 1.0f * i);

    array_remove(&array, 4);	// remove last element
    assert(array.count == 4);	// count must now be three
    assert(array.data[0] == 0.0f);
    assert(array.data[1] == 1.0f);
    assert(array.data[2] == 2.0f);
    assert(array.data[3] == 3.0f);

    array_remove(&array, 0);	// remove first element
    assert(array.count == 3);	// count must now be three
    assert(array.data[0] == 1.0f);	// elements have shifted to indices 0..2
    assert(array.data[1] == 2.0f);
    assert(array.data[2] == 3.0f);

    array_remove(&array, 1);	// remove second element
    assert(array.count == 2);	// count must now be two
    assert(array.data[0] == 1.0f);
    assert(array.data[1] == 3.0f);
    array_destroy(&array);
    fputs("test_array_remove PASSED\n", stderr);
}
