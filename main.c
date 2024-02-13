#include <stdio.h>


int sum_ints(void) {
int integers[1024] = {1};
for (int i = 1; i < 1024; ++i) integers[i] = integers[i - 1] + 1;
return integers[1023];
}

double mul_doubles(int init) {
double doubles[1024] = {init};
for (int i = 1; i < 1024; ++i) doubles[i] = doubles[i - 1] * 0.999;
return doubles[1023];
}

int main(void) {
double result = mul_doubles(sum_ints());
printf("Result = %lf\n", result);
}
