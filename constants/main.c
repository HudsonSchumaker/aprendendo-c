/*
    aprendendo-c
    constantes - constants
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    
    /*
        constante (const) = valor fixo em uma varivel, nao pode ser mudado
        dutante execucao do programa.
     */
    
    const float pi = 3.141592;
    
    // pi = 1.0f; // nao funciona
    
    printf("%f", pi);
    
    return 0;
}
