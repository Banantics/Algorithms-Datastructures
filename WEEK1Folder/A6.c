
#include <iostream>
#include <string>
#include <cstdlib>

int * create_array(size_t capacity) {
 int* ptr = (int*) malloc(capacity*sizeof(int));
 return ptr;
 }

 int main( void ) {
 const size_t capacity = 24;
 int* array = create_array(capacity);

 for (size_t i = 0; i <= capacity; i++) array[i] = 42;

 for (size_t i = 0; i <= capacity; i++) {
 printf("array[%zu] = %d\n", i, array[i]);
 }
 }
 /// • How many int elements can be stored in the block of memory allocated by the create_array function?
///• What happens when you perform an out-of-bounds access to an array that is stored in dynamically allocated memory?

///• The program listed below has two problems that both cause out-of-bounds access to the array, either directly or 
///indirectly. What are these two problems, and how can they be fixed (Include the fixed program in your logbook)?


/// 1. The int element it should give a crash but it should be a really big negative number but malloc only accepts positive number
/// 2. It should usually crash or give unexpected results also it can cause buffer overflow if we have another array close to the overflow one
/// 3. The first problem is that we dont type in the malloc the sizeof the int which we should or atleast the size we weant to occupie by the ptr
/// The second one is i think it starts from i=1 when it should start from i=0 and also the capacity is <= so if we put i=1 it will overflow
