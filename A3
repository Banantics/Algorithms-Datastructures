#include <stdio.h>

int * create_array(void) {
    int array[10];
    return array;
}

void print_array(int values[], size_t size) {
    printf("[%d", values[0]);
    for (size_t i = 1; i < size; ++i) printf(", %d", values[i]);
    printf("]\n");
}

int main(void) {
    int *values = create_array();
    for (int i = 0; i < 10; ++i) values[i] = i + 1;
    print_array(values, 10);
}

/*• Which warnings and / or errors does the compiler give when compiling this program?
• What do these warnings and / or errors mean?
• Does this approach to create an array at runtime work? Why (not)?
*/

/// The error thats given is error: function returns address of local variable
/// Because the array its a integer and not a pointer and the user its trying to return the memory of the array
 
