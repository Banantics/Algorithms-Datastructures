#include "maxheap.h"

maxheap::maxheap(const std::vector<task> &values)
    : m_values{values} {
    heapify();
}

maxheap::operator bool() const {
    return !m_values.empty();
}

maxheap &maxheap::operator<<(int priority) {
    return operator<<(task{.priority = priority, .description = "unspecified"});
}

maxheap &maxheap::operator<<(const task &task) {
    insert(task);
    return *this;
}

size_t maxheap::size() const {
    return m_values.size();
}

const task &maxheap::maximum() const {
    // TODO (Activity 6)
    //  return the maximum value in the heap
    static task remove_this_one{42, "Remove this one, it's just a placeholder"};
    return remove_this_one;
}

void maxheap::delete_max() {
    std::swap(m_values[0], m_values.back());
    m_values.pop_back();
    bubble_down(0);
}

void maxheap::insert(const task &value) {
    m_values.push_back(value);
    bubble_up(m_values.size() - 1);
}

void maxheap::swap_at_index(size_t first_index, size_t second_index) {
    std::swap(m_values[first_index], m_values[second_index]);
}

size_t maxheap::parent_index(size_t index) {
    // TODO (Activity 5)
    //  return the index of the parent of the node at the given index, or npos if it does not exist
    (void) index;
    return npos;
}

size_t maxheap::left_child_index(size_t index) {
    // TODO (Activity 5)
    //  return the index of the left child of the node at the given index, or npos if it does not exist
    (void) index;
    return npos;
}

size_t maxheap::right_child_index(size_t index) {
    // TODO (Activity 5)
    //  return the index of the right child of the node at the given index, or npos if it does not exist
    (void) index;
    return npos;
}

size_t maxheap::bubble_up(size_t index) {
    // TODO (Activity 7)
    //  while the value at the given index is smaller than its parent value,
    //  bubble it up
    //  use the functions swap_at_index and parent_index
    (void) index;
    size_t swaps = 0;
    return swaps;
}

size_t maxheap::bubble_down(size_t index) {
    // TODO (Activity 8)
    //  While the value at the given index is greater than any of its two child values,
    //  bubble it down
    (void) index;
    size_t swaps = 0;
    return swaps;
}

size_t maxheap::heapify() {
    // TODO (Activity 11)
    //  fix heap violations by bubbling values down, starting with leaf nodes
    size_t swaps = 0;
    return swaps;
}

