/*
  aprendendo-c
  Operadores de atribuição extendidos (Augmented assignment operators)
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
        Operadores de atribuição aumentada são usados para executar 
        uma operação e atribuição em uma única instrução.
    */

    int x = 10;

    x += 5;  // equivalente a x = x + 5;
    printf("a = %d\n", x);  // imprime: x = 15

    x -= 3;  // equivalente a x = x - 3;
    printf("a = %d\n", x);  // imprime: x = 12

    x *= 2;  // equivalente a x = x * 2;
    printf("a = %d\n", x);  // imprime: x = 24

    x /= 4;  // equivalente a x = x / 4;
    printf("a = %d\n", x);  // imprime: x = 6

    x %= 5;  // equivalente a x = x % 5;
    printf("a = %d\n", x);  // imprime: x = 1

    return 0;
}
