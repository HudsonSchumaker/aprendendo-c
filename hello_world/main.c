/*
  aprendendo-c
  Olá mundo (Hello world)
*/

// inclui no projeto a biblioteca padrao de I/O 
#include <stdio.h>

// metódo main
int main(int argc, const char * argv[]) {
    printf("Olá mundo !\n");
    return 0;
}

/*
  main é a função principal onde começa a execução de qualquer programa C.
  Os parâmetros argc e argv[] são argumentos de linha de comando.
  argc é a contagem do total de argumentos de linha de comando passados para o executável na 
  execução (incluindo o nome do executável como primeiro argumento). 
  argv[] é uma matriz de ponteiros de caracteres listando todos os argumentos.
*/
