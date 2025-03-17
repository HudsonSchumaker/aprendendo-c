/*
  aprendendo-c
  Entrada de usuário (user input)
*/

// Incluindo a biblioteca padrão de entrada e saída
#include <stdio.h>

int main(int argc, const char *argv[])
{
    /*
        Em C, a função scanf() é usada para ler a entrada do usuário.
        Aqui está um exemplo:
    */

    int idade = 0;                // Declarando a variável idade e inicializando com 0
    printf("Digite sua idade: "); // Imprimindo uma mensagem na tela
    scanf("%d", &idade);          // Lendo a entrada do usuário e armazenando na variável idade

    if (idade >= 18) // Verificando se a idade é maior ou igual a 18
    {
        printf("Você é maior de idade\n");
    }
    else
    {
        printf("Você é menor de idade\n");
    }

    printf("Sua idade é %d\n", idade); // Imprimindo a idade do usuário

    printf("Qual é o seu nome? "); // Imprimindo uma mensagem na tela
    char nome[16];                 // Declarando a variável nome com tamanho 16
    scanf("%s", nome);             // Lendo a entrada do usuário e armazenando na variável nome
    printf("Olá, %s!\n", nome);    // Imprimindo o nome do usuário

    
    // retorna 0 para o sistema operacional indicando que o programa foi executado com sucesso
    return 0;
}
