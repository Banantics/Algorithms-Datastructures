#include <stdio.h>
#include <stdlib.h>
int main() {
    void *ptr = malloc(0);
    printf("%p", ptr);
    return 0;
}
/*• What does the call to malloc return?
• What happens if you try to store data in the block of memory obtained by malloc (by
storing a value at the address that was returned), and why does that happen?
• Is it possible to allocate a block of memory that has a negative size?
*/

/// 1.The Malloc returns the allocated memory of size 0
/// 2.It will lead to errors because the allocated memory is not made for stroing
/// 3. No because malloc is expecting positive value
