/*
  aprendendo-c
  Operadores aritméticos (Arithmetic operators)
  Hudson Schumaker
*/

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>

// funcao main
int main(int argc, const char *argv[])
{
  /*
      + adicao
      - subtracao
      * multiplicacao
      / divisao
      % modulo
      ++ incremento
      -- decremento
  */

  int x = 6; // declara a variável x do tipo inteiro e atribui o valor 6
  int y = 2; // declara a variável y do tipo inteiro e atribui o valor 2
  int z = 0; // declara a variável z do tipo inteiro e atribui o valor 0

  z = x + y; // atribui a variável z o valor da soma de x e y
  printf("%d\n", z); // imprime na tela o valor de z = 8

  z = x - y; // atribui a variável z o valor da subtração de x e y
  printf("%d\n", z); // imprime na tela o valor de z = 4

  z = x * y; // atribui a variável z o valor da multiplicação de x e y
  printf("%d\n", z); // imprime na tela o valor de z = 12

  z = x / y; // atribui a variável z o valor da divisão de x e y
  printf("%d\n", z); // imprime na tela o valor de z = 3

  z = x % y; // atribui a variável z o valor do módulo de x e y
  printf("%d\n", z); // imprime na tela o valor de z = 0

  z++; // incrementa a variável z em 1
  printf("%d\n", z); // imprime na tela o valor de z = 1

  z--; // decrementa a variável z em 1
  printf("%d\n", z); // imprime na tela o valor de z = 0

  // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
  return 0;
}
