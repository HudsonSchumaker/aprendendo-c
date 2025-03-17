/*
  aprendendo-c
  Escape de caracteres (Escape sequence)
*/

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>

// Funcao principal
int main(int argc, const char* argv[]) {

    /*
        \n = linha nova
        \t = tabulacao (tab)
        \\ = exibe \
        \' = exibe '
        \" = exibe "
    */

    printf("1\t2\t3\t4\t5\t6\n7\t8\t9\n");
    printf("\"Eu gosto de pizza\\\" - Hudson Schumaker");

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;
}
