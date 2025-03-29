/*
    aprendendo-c
    tipo de dados - data type
    Hudson Schumaker
*/

// inclui no projeto a biblioteca padrao de I/O (input, output) entrada e saída
#include <stdio.h>
// inclui no projeto a biblioteca padrao de booleanos (true, false) 
#include <stdbool.h>

// funcao principal do programa
int main(int argc, const char *argv[])
{

    // https://www.geeksforgeeks.org/data-types-in-c/

    char c = 'a';       // caracter simples %c
    char a[] = "Mario"; // array de caracteres %s

    int i = 10; // numero inteiro %d

    float f = 3.141592f;               // 4 bytes 6-7 digitos de precisao %f
    double d = 3.14159265358979323846; // 8 bytes 15-16 digitos de precisao %lf

    bool b = true; // 1 byte (true ou false) %d

    printf("%c\n", c);  // %c  para caracter simples 
    printf("%s\n", a);  // %s  para array de caracteres
    printf("%d\n", i);  // %d  para numero inteiro
    printf("%f\n", f);  // %f  para numero flutuante
    printf("%lf\n", d); // %lf para numero double
    printf("%d\n", b);  // %d  para booleano

    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;
}
