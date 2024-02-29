void array_reserve(array *p_array, size_t min_capacity) {
    size_t capacity = p_array->capacity;
    while (capacity < min_capacity) {
        capacity = (capacity + 1) * 2 /// We found on the internet that the average growth rate of a dymanic array
    }
	
	if (capacity != p_array->capacity) {
		p_array = realloc(p_array->data, capacity * sizeof(float));/* reallocate memory, update capacity of array, etc. */
	}
}
