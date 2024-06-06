#include <iostream>
#include <cassert>
#include <string>
#include "maxheap.h"
#include "heap_tester.h"

// Activity 11
size_t bubble_down(std::vector<int> &values, size_t index, size_t count) {
    (void) values;
    (void) index;
    (void) count;
    size_t swaps = 0;
    return swaps;
}

// Activity 11
size_t heapify(std::vector<int> &values) {
    (void) values;
    size_t swaps = 0;
    return swaps;
}

// Activity 12: sort a vector using heap sort
void heap_sort(std::vector<int> &values) {
    (void) values;
}

int main() {
    // Activty 5
    heap_tester::test_left_child_index();
    heap_tester::test_right_child_index();
    heap_tester::test_parent_index();

    // Activty 6
    heap_tester::test_find_max();

    // Activty 7
    heap_tester::test_bubble_up();

    // Activity 8
    heap_tester::test_bubble_down();

    // Activity 9
    heap_tester::test_heapify();

    // Activity 11, 12
    std::vector<int> numbers{2, 9, 5, 3, 7, 6, 0, 4, 1};
    heap_sort(numbers);
    assert(heap_tester::is_sorted(numbers));

    return 0;
}
