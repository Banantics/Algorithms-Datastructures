// program 2
12 int main(void) {
13 array_t *array = (array_t *) malloc(sizeof(array_t));
14 array_init(array, 10);
15 // .... do some work ...
7
16 // finally, clean up
17 array_destroy(array);
18 free(array);
19 }
/// Its the second one because this is the way we free memory of the heap 

