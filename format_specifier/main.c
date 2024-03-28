/*
    aprendendo-c
    tipo de dados - data type
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    
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
    
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 200.99;
    float item4 = 6.999; // gasolina usa precisao de 3 casas.
    
    int totalItens = 4;
    
    printf("item 1: R$ %f\n", item1);
    printf("item 2: R$ %.2f\n", item2);
    printf("item 3: R$ %8.2f\n", item3);
    printf("item 4: R$ %-8.3f", item4);
    printf("total itens : %d", totalItens);
    
    return 0;
}
