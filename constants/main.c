/*
    aprendendo-c
    constantes - constants
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
        constante (const) = valor fixo em uma varivel, nao pode ser mudado
        dutante execucao do programa.
     */

    const float pi = 3.141592; // declara a constante pi do tipo float e atribui o valor 3.141592

    // pi = 1.0f; // nao funciona

    printf("%f", pi); // imprime na tela o valor de pi = 3.141592

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;
}
