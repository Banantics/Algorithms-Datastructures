# Week 3 - Linked Lists

## Team

>Members:
>
>- Konstantin Apostolov
>- Onno Oerbekka
>
> Date: *4* *3* 2024

## Provided code

The `zip` file on Blackboard contains the C code for this week.
The project contains two *targets*: `singly_linked_lists` and `doubly_linked_lists`.
The first eight activities apply to the singly linked lists project, activities nine, ten, and eleven apply to the doubly linked lists project.

Make sure to test your code!
There are several `test_list_` functions provided in the `test_list.c` source and `test_list.h` header files.
These functions perform tests of your implementations by using the `assert` macro.
In case an assertion fails, your program will stop, and the failed assertion will be indicated in the console.

If you're on Windows, then run your code on WSL.
This allows you to use the *address sanitizer*, which will help you to locate bugs related to memory management.
To enable it, add the `-DUSE_ASAN=True` option to your CMake profile (Settings > Build, Execution, Deployment > CMake > CMake options).

## Activities

Make sure to have the activities signed off regularly to ensure progress is tracked.

### Activity 1: Chaining pointers

Use the following code in your `main` function.
Replace all pointer dereferences (e.g., `*pointer`) with the arrow operator.

```c
node_t first = { .value = 1,
    .next = &(node_t) { .value = 2,
        .next = &(node_t) { .value = 3,
            .next = &(node_t) { .value = 4,
                .next = NULL}}}};

printf("first: %d\n", first.value);
printf("second: %d\n", (first.next->value);
printf("third: %d\n", (first.next->next->value);
printf("fourth: %d\n", (first.next->next->next->value);
```

### Activity 2: Traversal
```c
void print_nodes(const node_t *first) {
while (first != NULL){
printf("%d\n", first->value);
first = first->next;
 }
}
```
```c
void print_nodes(const node_t * first);

int main(void) {
    node_t first = { .value = 1,
	    .next = &(node_t) { .value = 2,
    		.next = &(node_t) { .value = 3,
	    		.next = &(node_t) { .value = 4,
		    		.next = NULL}}}};
	
	// expected output: 1, 2, 3, 4
	print_nodes(&first);
	
	// expected output: 3, 4
	print_nodes(first.next->next);
}
```

### Activity 3: Linked list deallocation

Implement the `list_destroy` function, such that the code does not contain a memory leak.
Use the address sanitizer to check if your code runs without memory problems.

```c
void list_destroy(list_t *plist) {
    (void) plist;

    while (plist ->head!= NULL) {
        node_t* current = plist->head;
        plist->head = plist->head->next;
        free(current);
        // TODO: traverse the list and free all nodes (Activity 3)
    }
}

list_t list;
list.head = node_create(2);		// pointer to first node
list.head->next = node_create(3);	// create and add second node
list.head->next->next = node_create(7);	// create and add third node
list.head->next->next->next = node_create(42);	// add a final node	

list_destroy(&list);	// deallocate all memory
```

### Activity 4: Appending to a singly linked list

Implement the `list_append` function.
Use the `test_list_append` function to test your implementation.

```c
void list_append(list_t * list, int value);
void list_append(list_t *plist, int value) {
    (void) plist;
    (void) value;
    node_t *node = node_create(value);
    if (plist->head == NULL) {
       plist->head = node;
    } else {
        while (plist->head->next != NULL) { /// we are trying to find the end of the list so we can append
            plist->head = plist->head->next;
        }
        plist->head->next = node;
        // TODO: append value to the list by adding a new node after the last node (Activity 4)
    }
}
```

### Activity 5: Time complexity of prepend and append

/// The time complexity of appending a new element is O(1) because
/// We increase the size of the list by one and we dont have to copy the whole list
/// Neither we have to allocate new memory to use to append. The time wont change
/// We know that it does not matter how big the input of the elements are the time of the
/// Execution is the same .
/// It still would be O(1) notation

### Activity 6: Access by index

Implement the `list_at` function.
Use the `test_list_at` function to test your implementation.

```c
const node_t *list_at(const list_t *list, size_t index);
const node_t * list_at(const list_t *plist, size_t index) {
(void) plist;
size_t checking_index = 0;
const node_t *node = plist->head;
while (plist->head != NULL && checking_index < index){
node = node->next;
checking_index++;
}
return node;

}
```

### Activity 7: A bad for-loop

```c

```
### Activity 8: Removal in a singly-linked list

Implement the `list_remove_last` function.
Use the `test_list_remove_last` function to test your implementation.

```c
bool list_remove_last(list_t * list);

 (void) plist;
    node_t *current = plist->head;
    node_t  *previous;

    if(plist->head == NULL){ /// this mean the list is empty
        return false;
    }

    if(plist->head->next == NULL){ /// check if there is only one node
        free(plist->head);
        plist->head = NULL;
        return true;
    }
    else {
        while (current->next != NULL) { /// we do it till we are on the second to last  node
        /// this way current can point to the last one and previous to the second to last
            previous = current;
            current = current->next;

        }
        free(previous->next); /// we free it
        previous->next =NULL; /// we remove the lsat node
        return true;
    }
}
```

### Activity 9: Appending to a doubly linked list

Implement the `list_append` function for the doubly linked list.
Make sure to select the proper "run configuration" in CLion.
Use the `test_list_append` function to test your implementation.

```c
void list_append(list_t * list);
```

### Activity 10: Removal from a doubly linked list

Provide the correct implementation for the `list_remove` function.
Use the `test_list_remove` function to test your implementation.

```c
// updates the list by removing the node referred to by node from the list
void list_remove(list_t *plist, node_t *pnode) {
    (void) plist;
    (void) pnode;

if(plist->head->next == NULL && plist->tail->prev == NULL){
    free(pnode);
    plist->head = NULL;
    plist->tail = NULL;
    return;
}

 if (pnode == plist->head){
     plist->head = pnode->next;
 } else if(pnode == plist->tail){
     plist->tail = pnode->prev;
     plist->tail->next = NULL;
     plist->head->prev = NULL;

 } else {
     pnode->prev->next = pnode->next;
     pnode->next->prev = pnode->prev;
 }
    free(pnode);


    // TODO: remove the given node from the list (Activity 10)
}
```

### Activity 11: Insertion in a doubly linked list

Implement the `list_insert` function for the doubly linked list.
Use the `test_list_insert` function to test your implementation.

```c
// updates the list by inserting value before the node referred to by before
void list_insert(list *list, node_t *before, int value);
```

### Activity 12: Time complexities

Fill in the table with the correct big-O expressions.

| Operation       | Array                      | Linked List |
| --------------- | -------------------------- | ----------- |
| Access          | O(?)                       | O(?)        |
| Append          | O(?)                       | O(?)        |
| Insert          | O(?)                       | O(?)        |
| Remove          | O(?)                       | O(?)        |

## Looking back

### What we've learnt

Formulate at least one lesson learned.

### What were the surprises

Fill in...

### What problems we've encountered

Fill in...

### What was or still is unclear

Fill in...

### How did the group perform?

How was the collaboration? What were the reasons for hick-ups? What worked well? What can be improved next time?


