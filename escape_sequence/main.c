/*
  aprendendo-c
  Escape de caracteres (Escape sequence)
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        \n = linha nova
        \t = tabulacao (tab)
        \\ = exibe \
        \' = exibe '
        \" = exibe "
    */

    printf("1\t2\t3\t4\t5\t6\n7\t8\t9\n");
    printf("\"Eu gosto de pizza\\\" - Hudson Schumaker");
    return 0;
}
