/*
  aprendendo-c
  Variáveis (variables)
  Hudson Schumaker
*/

// Incluindo a biblioteca padrão de entrada e saída
#include <stdio.h>

// Função principal do programa
int main(int argc, const char *argv[])
{

  /*
      Variável, espaço alocado na memória para amazenar valores.
      Usamos o nome da variável para acessar seu conteúdo.
      A variável passa a se comportar como o valor que guarda.
      Temos que dizer qual tipo de dado a variável vai guardar.
  */

  int x;       // declaracao
  x = 123;     // inicializacao
  int y = 321; // declaracao + inicializacao

  printf("%d\n", x); // imprime o valor da variável x
  printf("%d\n", y); // imprime o valor da variável y

  // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
  return 0;
}
