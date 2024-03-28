/*
  aprendendo-c
  Operadores aritméticos (Arithmetic operators)
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
        + adicao
        - subtracao
        * multiplicacao
        / divisao
        % modulo
        ++ incremento
        -- decremento
    */
    
    int x = 6;
    int y = 2;
    int z = 0;
    
    z = x + y;
    printf("%d\n", z);
    
    z = x - y;
    printf("%d\n", z);
    
    z = x * y;
    printf("%d\n", z);
    
    z = x / y;
    printf("%d\n", z);
    
    z = x % y;
    printf("%d\n", z);
    
    z++;
    printf("%d\n", z);
    
    z--;
    printf("%d\n", z);
    
    return 0;
}
