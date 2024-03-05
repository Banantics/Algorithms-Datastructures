/*
    The program listed below creates four instances (three of which are anonymous) of the node_t←↩
    structure defined earlier, and links them together through the next pointer member. The
    program then prints the values stored in the structures, by accessing them through the first
    "node", using a sequence of pointer dereferences.
    Rewrite the code by eliminating all pointer dereferences (i.e., the * operator) by correctly ap-
    plying the arrow operator.
*/
#include <stdio.h>

int main(void) {
    node_t first = { .value = 1,
        .next = &(node_t) { .value = 2,
            .next = &(node_t) { .value = 3,
                .next = &(node_t) { .value = 4,
                    .next = NULL}}}};

    printf("first: %d\n", first.value);
    printf("second: %d\n", first.next->value);
    printf("third: %d\n", first.next->next->value);
    printf("fourth: %d\n", first.next->next->next->value);
}