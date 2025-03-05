/*
    aprendendo-c
    tipo de dados - data type
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{

    // https://www.geeksforgeeks.org/data-types-in-c/

    char c = 'a';       // caracter simples %c
    char a[] = "Mario"; // array de caracteres %s

    int i = 10; // numero inteiro %d

    float f = 3.141592f;               // 4 bytes 6-7 digitos de precisao %f
    double d = 3.14159265358979323846; // 8 bytes 15-16 digitos de precisao %lf

    bool b = true; // 1 byte (true ou false) %d

    printf("%c\n", c);
    printf("%s\n", a);
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%lf\n", d);

    return 0;
}
