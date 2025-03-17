/*
  aprendendo-c
  Funções matemáticas (Math functions)
*/

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>
// inclui no projeto a biblioteca padrao de matemática
#include <math.h>

int main(int argc, const char *argv[])
{

  /*
      Em C, a biblioteca math.h fornece várias funções matemáticas.
      aqui estão alguns exemplos:
      sqrt() - retorna a raiz quadrada de um número
      cbrt() - retorna a raiz cúbica de um número
      fabs() - retorna o valor absoluto de um número
      ceil() - arredonda um número para cima
      floor() - arredonda um número para baixo
      log() - retorna o logaritmo de um número
      sin() - retorna o seno de um número
      cos() - retorna o cosseno de um número
      tan() - retorna a tangente de um número
      exp() - retorna a exponencial de um número
      pow() - retorna a potência de um número
  */

  double x = 9.0;

  // sqrt() funcao para calcular a raiz quadrada
  printf("Raiz quadrada de %.2lf = %.2lf\n", x, sqrt(x));

  // cbrt() funcao para calcular a raiz cubica
  printf("Raiz cubica de %.2lf = %.2lf\n", x, cbrt(x));

  // fabs() funcao para calcular o valor absoluto, use abs() para inteiros
  printf("Valor absoluto de %.2lf = %.2lf\n", -x, fabs(-x));

  // ceil() funca para arrendondar pra cima
  printf("Arrendondamento para cima %.2lf = %.2lf\n", 2.3, ceil(2.3));

  // floor() funcao para arrendondar pra baixo
  printf("Arrendondamento pra baixo %.2lf = %.2lf\n", 2.3, floor(2.3));

  // log() funcao para calcular logaritimo na base 10
  printf("Logaritimo de %.2lf = %.2lf\n", x, log(x));

  // sin() funcao para calcular seno
  printf("Seno de %.2lf = %.2lf\n", x, sin(x));

  // cos() funcao para calcular coseno
  printf("Coseno de %.2lf = %.2lf\n", x, cos(x));

  // tan() funcao para calcular tangente
  printf("Tangente de %.2lf = %.2lf\n", x, tan(x));

  // exp() função para calcular exponencial
  printf("Exponencial de %.2lf = %.2lf\n", x, exp(x));

  // pow() função para calcular potência
  printf("Potência de %.2lf ^ 3 = %.2lf\n", x, pow(x, 3));

  // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
  return 0;
}
