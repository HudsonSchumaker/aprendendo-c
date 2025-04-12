/*
  aprendendo-c
  Operador ! || (Operator NOT)
*/

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>
// inclui no projeto a biblioteca padrao de booleanos (true, false)
#include <stdbool.h>

// funcao main
int main(int argc, const char *argv[])
{
    /*
    Logical Operators
    Operadores lógicos são usados para combinar duas ou mais condições.
    O operador lógico NOT (!) inverte o valor de uma condição.
    Tabela verdade do operador lógico NOT:
    +-------+-----------+ 
    |   A   |    !A     |
    +-------+-----------+
    |   V   |     F     |
    |   F   |     V     |
    +-------+-----------+
    */

    int num = 10;

    // Instrução if com operador lógico NOT
    if (!(num > 5))
    {
        printf("Número não é maior que 5\n");
    }
    else
    {
        printf("Número é maior que 5\n");
    }

    return 0;
}
