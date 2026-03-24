#include <stdio.h>

void erro(int n) {
    printf("%d\n", n);
    erro(n-1); // SEM caso base
}


void correto(int n) {
    if(n == 0) return;
    printf("%d\n", n);
    correto(n-1);
}

int main() {
    // erro(5); // gera falha
    correto(5);
    return 0;
}
