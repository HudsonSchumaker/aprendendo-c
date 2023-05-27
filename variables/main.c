/*
  aprendendo c
  Variáveis (variables)
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        Variável, espaço alocado na memória para amazenar valores.
        Usamos o nome da variável para acessar seu conteúdo.
        A variável passa a se comportar como o valor que guarda.
        Temos que dizer qual tipo de dado a variável vai guardar.
    */

    int x;       // declaracao
    x = 123;     // inicializacao
    int y = 321; // declaracao + inicializacao

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}
