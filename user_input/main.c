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

    int idade = 0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Você é maior de idade\n");
    }
    else
    {
        printf("Você é menor de idade\n");
    }

    printf("Sua idade é %d\n", idade);

    printf("Qual é o seu nome? ");
    char nome[16];
    scanf("%s", nome);
    printf("Olá, %s!\n", nome);

    return 0;
}
