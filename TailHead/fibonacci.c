#include <stdio.h>

#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0; 
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int i, a = 10;
    for (i = 0; i < a; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}
