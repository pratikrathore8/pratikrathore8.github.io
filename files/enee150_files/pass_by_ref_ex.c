#include <stdio.h>

void foo(int *);
int bar(int);

int main(int argc, char **argv) {
    int i = 42;

    bar(i);
    printf("Value of i: %d\n", i);

    foo(&i);
    printf("Value of i: %d\n", i);
}

void foo(int *val) {
    (*val)++;
}

int bar(int val) {
    val++;
    return val;
}
