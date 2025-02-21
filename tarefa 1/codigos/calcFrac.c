#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct x{
    int num;
    int den;
} Fracao;

Fracao initFracao(int numerador, int denominador){
    Fracao novaFracao;
    novaFracao.num = numerador;
    novaFracao.den = denominador;
    return novaFracao;
}

Fracao multiplicar(Fracao a, Fracao b){
    Fracao novaFracao;
    novaFracao.num = a.num * b.num;
    novaFracao.den = a.den * b.den;
    return novaFracao;
}

Fracao dividir(Fracao a, Fracao b){
    Fracao novaFracao;
    novaFracao.num = a.num * b.den;
    novaFracao.den = a.den * b.num;
    return novaFracao;
}

Fracao somar(Fracao a, Fracao b){
    Fracao novaFracao;
    novaFracao.den = a.den * b.den;
    novaFracao.num = (a.num*b.den) + (b.num*a.den);
    return novaFracao;
}

Fracao subtrair(Fracao a, Fracao b){
    Fracao novaFracao;
    novaFracao.den = a.den * b.den;
    novaFracao.num = (a.num*b.den) - (b.num*a.den);
    return novaFracao;
}

bool igualdade(Fracao a, Fracao b){
    Fracao novoA, novoB;
    novoA.den = a.den * b.den;
    novoB.den = b.den * a.den;
    novoA.num = a.num * b.den;
    novoB.num = b.num * a.den;
    if(novoA.den == novoB.den && novoA.num == novoB.num) return true;
    else return false;
}


int main(void){
    Fracao fracao1, fracao2;

    for(int i=0; i<2; i++){
        int novoNum, novoDen;
        printf("Numerador da fracao %d:", i+1);
        scanf("%d", &novoNum);
        printf("Denominador da fracao %d:", i+1);
        scanf("%d", &novoDen);
        if(!novoDen){
            printf("NAO PODE DIVIDIR POR ZERO!!!\n");
            return 1;
        }
        if(i==0) fracao1 = initFracao(novoNum,novoDen);
        else fracao2 = initFracao(novoNum,novoDen);
    }


    printf("\nFracao 1: %d/%d\n", fracao1.num, fracao1.den);
    printf("Fracao 2: %d/%d\n", fracao2.num, fracao2.den);

    int escolha;
    Fracao resultado;
    do{
        printf("\nEscolha Operacao:\n[1] Soma\n[2] Subtracao\n[3] Multiplicacao\n[4] Divisao\n[5] Igualdade\n[0] Sair\nEscolha: ");
        scanf("%d", &escolha);
    } while (escolha < 0 || escolha > 5);

    if(escolha==1) {
        resultado = somar(fracao1,fracao2);
        printf("Resultado: %d/%d + %d/%d = %d/%d", fracao1.num, fracao1.den, fracao2.num, fracao2.den, resultado.num, resultado.den);
    }
    else if(escolha==2) {
        resultado = subtrair(fracao1,fracao2);
        printf("Resultado: %d/%d - %d/%d = %d/%d", fracao1.num, fracao1.den, fracao2.num, fracao2.den, resultado.num, resultado.den);
    }
    else if(escolha==3) {
        resultado = multiplicar(fracao1,fracao2);
        printf("Resultado: %d/%d * %d/%d = %d/%d", fracao1.num, fracao1.den, fracao2.num, fracao2.den, resultado.num, resultado.den);
    }
    else if(escolha==4) {
        resultado = dividir(fracao1,fracao2);
        printf("Resultado: (%d/%d) / (%d/%d) = %d/%d", fracao1.num, fracao1.den, fracao2.num, fracao2.den, resultado.num, resultado.den);
    }
    else if(escolha==5) {
        bool ehIgual;
        ehIgual = igualdade(fracao1,fracao2);
        if(ehIgual) printf("Resultado: (%d/%d) = (%d/%d)", fracao1.num, fracao1.den, fracao2.num, fracao2.den);
        else printf("Resultado: (%d/%d) != (%d/%d)", fracao1.num, fracao1.den, fracao2.num, fracao2.den);
    }
    else if(escolha==0) printf("Obrigado por usar meu programa :)\n");

    return 0;
}


//cls && cd C:\Users\caiof\Documentos disco local\aaaComputacao_faculdade\paradigmas\tarefa 1\codigos && gcc calcFrac.c -o calcFrac && calcFrac