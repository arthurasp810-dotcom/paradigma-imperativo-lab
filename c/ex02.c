#include <stdio.h>
void alterar_valor(int saldo) {
    saldo += 1000;
}

void alterar_referencia(int *saldo) {
    *saldo += 1000;
}

int main() {
    int saldo = 1000;

    alterar_valor(saldo);
    printf("Após valor: %d\n", saldo);

    alterar_referencia(&saldo);
    printf("Após referência: %d\n", saldo);

    return 0;
}
