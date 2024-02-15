int main() {
    setbuf(stdout, NULL);
     int stack_variable = 42;
 int* ptr = &stack_variable;
 free(ptr); // 1. free a variable that has automatic lifetime

    return 0;
} /// When we free an automatics one it causes a crash because its not heap and its trying to free the stack

int main(){
    setbuf(stdout, NULL);
    int* null_ptr = NULL;
     free(null_ptr);
    return 0;
} /// Because there was the Value NULL tis not removed after we use the free function and it does nothing
