// Caio Vinicius Corsini Filho
#include <stdio.h>
#include <stdlib.h>

#define DIAS_ANO 365
#define DIAS_MES 30

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

int main (void) {
    int idade, original;
    printf("Sua idade (em dias): ");
    scanf("%d", &idade);

    data idadeCompleta;
    idadeCompleta.dia = 0;
    idadeCompleta.mes = 0;
    idadeCompleta.ano = 0;

    while(idade>=DIAS_ANO){
        idadeCompleta.ano += 1;
        idade -= DIAS_ANO;
    }

    while(idade>=DIAS_MES){
        idadeCompleta.mes += 1;
        idade -= DIAS_MES;
    }

    idadeCompleta.dia = idade;

    printf("Voce tem %d dias, %d meses e %d anos de idade.", idadeCompleta.dia, idadeCompleta.mes, idadeCompleta.ano);
    
        
    return 0;
    }

//cls && cd C:\Users\caiof\Documentos disco local\aaaComputacao_faculdade\paradigmas\tarefa 1\codigos && gcc diaMesAno.c -o diaMesAno && diaMesAno