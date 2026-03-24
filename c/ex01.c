#include <stdio.h>

long fib_iterativo(int n) {
    long a = 0, b = 1, temp;
    for(int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

long fib_recursivo(int n) {
    if(n <= 1) return n;
    return fib_recursivo(n-1) + fib_recursivo(n-2);
}

int main() {
    int n = 40;

    printf("Iterativo: %ld\n", fib_iterativo(n));
    printf("Recursivo: %ld\n", fib_recursivo(n));

    return 0;
}
