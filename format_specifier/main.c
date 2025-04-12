/*
    aprendendo-c
    tipo de dados - data type
    Hudson Schumaker
*/

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>
// inclui no projeto a biblioteca padrao de booleanos (true, false) 
#include <stdbool.h>

// funcao main
int main(int argc, const char *argv[])
{

    /*
        formatador % = define e formata o tipo de dados a ser exibido

        %c = caracter (character)
        %s = string (array de caracteres)
        %d = integer (inteiro)
        %f = float
        %lf = double

        %.1 = precisao decimal
        %1 = tamanho do numero
        %- = alimahemto a esquerda
    */

    float item1 = 5.75f;
    float item2 = 10.00f;
    float item3 = 200.99f;
    float item4 = 6.999f; // gasolina usa precisao de 3 casas.

    int totalItens = 4;

    printf("item 1: R$ %f\n", item1);
    printf("item 2: R$ %.2f\n", item2);
    printf("item 3: R$ %8.2f\n", item3);
    printf("item 4: R$ %-8.3f", item4);
    printf("total itens : %d", totalItens);

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;
}
