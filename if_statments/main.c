/*
  aprendendo-c
  Condicional Se (If staments)
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        Em C, a instrução if é usada para testar uma condição.
        Se a condição for verdadeira, o bloco de código dentro da instrução if será executado.
        Aqui estão alguns exemplos:
    */

    int num = 10;

    // Instrução if simples
    if (num > 5) {
        printf("Número é maior que 5\n");
    }

    // Instrução if-else (se-senao)
    if (num > 20) {
        printf("Número é maior que 20\n");
    } else {
        printf("Número não é maior que 20\n");
    }

    // Instrução if-else if-else (if aninhado)
    if (num > 20) {
        printf("Número é maior que 20\n");
    } else if (num > 10) {
        printf("Número é maior que 10\n");
    } else {
        printf("Número não é maior que 10\n");
    }

    return 0;
}
