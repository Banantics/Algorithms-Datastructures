#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "easy_input.h"
#include "test_array.h"

// Asks the user to input grades and stores them in the array
// input stops when the user enters 0
// TODO: finish implementation
void input_grades(array_t * grades) {
    (void) grades;
    float grade = input_float("Please enter a grade (0 to stop)");
    while (grade != 0.0f) {
        // TODO: append grade to the array if it is in range 1..10
        grade = input_float("Please enter a grade (0 to stop)");
    }
}

// computes and returns the average grade
// TODO: implement
float compute_average(const array_t * grades);

// counts and returns the number of grades that are at least the threshold
// TODO: implement
int num_passed(const array_t * grades, float threshold);

int main(void) {
    /*
     * This project consists of multiple source & header files.
     * This file (main.c) includes two header files that are in this project.
     * Have a look at these files - array.h and easy_input.h. They contain
     * the function prototypes for functions defined in their corresponding
     * source files - array.c and easy_input.c.
     * You can simply call those functions from here. Be aware that most of the functions
     * in array.c must be implemented still!
     *
     * You can test your array functions using the three functions provided in test_array.h.
     * These functions use 'assert' statements to assert that some condition holds. If these conditions
     * do not hold, your program will crash with a message that lets you know which one failed.
     */

    test_array_append();
    test_array_insert();
    test_array_remove();

    // activity 12 -- grade administration system with dynamic array
/*
    array_t grades;         // the dynamic array
    array_init(&grades, 0); // initialize array with capacity of 0
    input_grades(&grades);
    float average = compute_average(&grades);
    int passed = num_passed(&grades, 5.5f);

    printf("Average grade: %.2f\n", average);
    printf("%d out of %zu students passed\n", passed, grades.count);

    array_destroy(&grades);
*/
    return 0;
}
