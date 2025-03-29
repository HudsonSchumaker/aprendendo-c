/*
    aprendendo-c
    Operador OR || (Operator OR)
    Hudson Schumaker
*/

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>
// inclui no projeto a biblioteca padrao de booleanos (true, false)
#include <stdbool.h>

int main(int argc, const char *argv[])
{
    /*
    Logical Operators
    Operadores lógicos são usados para combinar duas ou mais condições.
    O operador lógico OR (||) é verdadeiro se pelo menos uma das condições for verdadeira.
    Tabela verdade do operador lógico OR:
    +-------+-------+-----------+
    |   A   |   B   | A || B    |
    +-------+-------+-----------+
    |   V   |   V   |     V     |
    |   V   |   F   |     V     |
    |   F   |   V   |     V     |
    |   F   |   F   |     F     |
    +-------+-------+-----------+
    */

    int num = 10;

    // Instrução if com operador lógico OR
    if (num > 5 || num < 20)
    {
        printf("Número é maior que 5 ou menor que 20\n");
    }

    bool a = true;
    bool b = false;
    bool c = true;

    // Instrução if com operador lógico OR
    if (a || c)
    {
        printf("a ou c são verdadeiros\n");
    }

    // Instrução if com operador lógico OR
    if (a || b)
    {
        printf("a ou b são verdadeiros\n");
    }

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;
}
