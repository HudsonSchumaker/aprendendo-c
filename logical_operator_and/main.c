/*
    aprendendo-c
    Operador AND && (Operator AND)
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
    O operador lógico AND (&&) é verdadeiro se todas as condições forem verdadeiras.
    Tabela verdade do operador lógico AND:
    +-------+-------+-----------+
    |   A   |   B   | A && B    |
    +-------+-------+-----------+
    |   V   |   V   |     V     |
    |   V   |   F   |     F     |
    |   F   |   V   |     F     |
    |   F   |   F   |     F     |
    +-------+-------+-----------+
    */

    int num = 10;

    // Instrução if com operador lógico AND
    if (num > 5 && num < 20)
    {
        printf("Número é maior que 5 e menor que 20\n");
    }

    bool a = true;
    bool b = false;
    bool c = true;

    // Instrução if com operador lógico AND
    if (a && c)
    {
        printf("a e c são verdadeiros\n");
    }

    // Instrução if com operador lógico AND
    if (a && b)
    {
        // Não será executado
        printf("a e b são verdadeiros\n");
    } else {
        printf("a e b nao são verdadeiros\n");
    }

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;
}
