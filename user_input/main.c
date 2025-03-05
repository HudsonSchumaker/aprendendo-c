/*
  aprendendo-c
  Entrada de usuário (user input)
*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    /*
        Em C, a função scanf() é usada para ler a entrada do usuário.
        Aqui está um exemplo:
    */

    int age = 0;
    printf("Digite sua idade: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Você é maior de idade\n");
    }
    else
    {
        printf("Você é menor de idade\n");
    }

    printf("Sua idade é %d\n", age);

    printf("Qual é o seu nome? ");
    char name[16];
    scanf("%s", name);
    printf("Olá, %s!\n", name);

    return 0;
}
