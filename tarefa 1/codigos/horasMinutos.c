// Caio Vinicius Corsini Filho
#include <stdio.h>
#include <stdlib.h>

#define HORASemMIN 60

typedef struct{
    int horas;
    int minutos;
}tempo;

int main (void) {
    int n; int original;
    printf("Quanto tempo (em minutos): ");
    scanf("%d", &n);

    original = n;

    //Inicializando
    tempo resultado;
    resultado.horas = 0;
    resultado.minutos = 0;

    //Metodo guloso
    while(n>=HORASemMIN){
        resultado.horas += 1;
        n -= HORASemMIN;
    }

    resultado.minutos = n;

    printf("%d minutos equivalem a %d horas e %d minutos", original, resultado.horas, resultado.minutos);
        
    return 0;
    }

//cls && cd C:\Users\caiof\Documentos disco local\aaaComputacao_faculdade\paradigmas\tarefa 1\codigos && gcc horasMinutos.c -o horasMinutos && horasMinutos