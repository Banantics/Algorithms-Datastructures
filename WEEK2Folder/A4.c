array_t* array_init(array_t *p_array, size_t capacity) { // version 2
 if (p_array != NULL) {
 p_array->data = malloc(sizeof(float[capacity]));
p_array->count = 0;
 p_array->capacity = p_array->data != NULL ? capacity : 0;
 }
 return p_array;
 } /// This is the right one because this array its dynamic array and we have to release memory of the heap

array_t* array_init(array_t *p_array, size_t capacity) { // version 1
 if (p_array != NULL){
 float data[capacity];


 p_array->capacity = capacity;
 p_array->data = data;
 p_array->count = 0;
 }
 return p_array;
 } /// this is wrong because we cant let the compilier free memory because out of the heap because this is how we free memory for the stack
/// Also this is going to make the program have undefined behaviour.
