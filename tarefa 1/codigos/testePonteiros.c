#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i; 
    int *p;
    i = 1234;
    p = &i;
    printf ("*p++   = %d\n", *p++);
    printf ("p      = %ld\n", (long int) p);
    printf ("*(p++) = %ld\n", (long int) *(p++));   
    printf ("(*p)++ = %ld\n", (long int) (*p)++);
    return 0;
    }

//cls && cd C:\Users\caiof\Documentos disco local\aaaComputacao_faculdade\paradigmas\tarefa 1\codigos && gcc testePonteiros.c -o testePonteiros && testePonteiros