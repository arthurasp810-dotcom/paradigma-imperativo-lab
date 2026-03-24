#include <stdio.h>

typedef struct {
    int pacientes[100];
    int medicos[50];
    int leitos;
    float caixa;
} SistemaHospitalar;

void internar(SistemaHospitalar *s) {
    s->leitos--;
    s->caixa += 500;
}

int main() {
    SistemaHospitalar s = {0};
    s.leitos = 10;

    internar(&s);

    printf("Leitos: %d\n", s.leitos);

    return 0;
}
