/*
  aprendendo-c
  Condicional com switch (Switch staments)
*/

#include <stdio.h>

int main(int argc, const char *argv[])
{

    /*
        switch é uma instrução condicional que é usada para testar uma condição.
        tambem é uma alternativa para if-else if-else. Permite que você teste uma variável para igualdade 
        contra uma lista de valores.
    */

    int nota = 10;

    switch (nota) {
    case 10:
        printf("Nota é 10\n");
        break;
    case 9:
        printf("Nota é 9\n");
        break;
    case 8:
        printf("Nota é 8\n");
        break;
    case 7:
        printf("Nota é 7\n");
        break;
    case 6:
        printf("Nota é 6\n");
        break;
    default:
        printf("Nota não é 10, 9, 8, 7 ou 6\n");
        break;
    }

    return 0;
}
