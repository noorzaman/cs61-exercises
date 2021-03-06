#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int add(int a, int b) {
    assert(a + 1 > a);
    return a + b;
}

int main(int argc, char* argv[]) {
    if (argc <= 2) {
        fprintf(stderr, "Usage: add A B\n\
    Prints A + B.\n");
        exit(1);
    }

    int a = strtol(argv[1], 0, 0);
    int b = strtol(argv[2], 0, 0);
    printf("%d + %d = %d\n", a, b, add(a, b));
}
