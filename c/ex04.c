#include <stdio.h>
int calcular_altitude(int atual) {
    return atual + 100;
}

void alterar_altitude(int *altitude) {
    *altitude += 100;
}


int main() {
    int altitude = 1000;

    int nova = calcular_altitude(altitude);
    printf("Sem alterar: %d\n", altitude);

    alterar_altitude(&altitude);
    printf("Alterado: %d\n", altitude);

    return 0;
}
