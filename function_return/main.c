/*
    aprendendo-c
    funcoes com retorno - functions returns
    Hudson Schumaker
 */

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>

// funcao que recebe dois inteiros e retorna a soma deles
// o tipo de retorno da funcao e inteiro (int) e o nome da funcao e soma
// a funcao recebe dois argumentos inteiros (int a, int b) e retorna um inteiro (int)
int soma(int a, int b)
{
   return a + b; // retorna o resultado da soma
}

int subtracao(int a, int b)
{
   return a - b; // retorna o resultado da subtracao
}

/*
    funcao = bloco de codigo que pode ser chamado em qualquer parte do programa.
    funcao principal = main() - obrigatorio em todo programa C.
*/
int main(int argc, const char *argv[])
{
    // chama a funcao soma() passando os valores 1 e 2 como argumentos
    int resultado = soma(1, 2);
    printf("%d\n", resultado); // imprime no console(terminal) o resultado da soma

    resultado = subtracao(1, 2); // reusando a variavel resultado para armazenar o resultado da subtracao
    printf("%d\n", resultado);   // imprime no console(terminal) o resultado da subtracao

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;

}
