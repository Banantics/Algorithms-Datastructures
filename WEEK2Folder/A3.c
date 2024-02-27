array_t *array_init(array_t *p_array, size_t capacity) { // version 2
if (p_array != NULL){
	p_array->data = malloc(sizeof(float[capacity])); /// This is what makes this function right we manually alocate a byte memory we are gonna use for the data of the array
	p_array->count = 0;
	p_array->capacity = p_array->data != NULL ? capacity : 0 /// Here we check if we have succesfully alocated space for our Elements
	/// this basicly does if data is != NULL  then initializite capacity else if there is no place we can put the elemetns make it equal to 0;
}
}
/// The first one because its using automatic allocation memory which will lead to undefined behavior of the program
