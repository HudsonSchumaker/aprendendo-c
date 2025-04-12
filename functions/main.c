/*
    aprendendo-c
    funcoes - functions
    Hudson Schumaker
 */

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>

 // funcao que recebe dois inteiros e imprime a soma deles
void soma(int a, int b)
{
    printf("%d\n", a + b); // imprime no console(terminal) o resultado da soma
}

/*
    funcao = bloco de codigo que pode ser chamado em qualquer parte do programa.
    funcao principal = main() - obrigatorio em todo programa C.
*/
int main(int argc, const char *argv[])
{
    // chama a funcao soma() passando os valores 1 e 2 como argumentos
    soma(1, 2); // imprime na tela o resultado da soma (1 + 2 = 3)

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;

}
