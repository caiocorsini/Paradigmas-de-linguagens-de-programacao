// Caio Vinicius Corsini Filho
#include <stdio.h>
#include <stdlib.h>

#define HORASemMIN 60

typedef struct{
    int horas;
    int minutos;
}tempo;

tempo somaTempos(tempo tempoCompleto, int minutos){
    tempoCompleto.minutos += minutos;
    while(tempoCompleto.minutos >= HORASemMIN){
        tempoCompleto.horas += 1;
        tempoCompleto.minutos -= HORASemMIN;
    }
    return tempoCompleto;
}

int main (void) {
    tempo tempoCompleto;
    int minutos, n;
    printf("Quantos minutos: ");
    scanf("%d", &minutos);

    printf("Quantos minutos (tempo completo): ");
    scanf("%d", &n); tempoCompleto.minutos = n;

    printf("Quantos horas (tempo completo): ");
    scanf("%d", &n); tempoCompleto.horas = n;

    tempo resultado = somaTempos(tempoCompleto, minutos);
    printf("%dmin + %dh%dmin = %dh%dmin", minutos, tempoCompleto.horas, tempoCompleto.minutos, resultado.horas, resultado.minutos);

    return 0;
    }

//cls && cd C:\Users\caiof\Documentos disco local\aaaComputacao_faculdade\paradigmas\tarefa 1\codigos && gcc horasMinutos9.c -o horasMinutos9 && horasMinutos9