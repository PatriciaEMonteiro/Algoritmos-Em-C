#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipoEndereco
{
    char rua[50];
    int numero;
    char bairro[20];
    char cidade[30];
    char siglaEstado[3];
    long int CEP;
};

struct fichaPessoal
{
    char nome[50];
    long int telefone;
    struct tipoEndereco endereco;
};

int main()
{

    struct fichaPessoal ficha;

    strcpy_s(ficha.nome, "Lysa Caroline Souza");
    ficha.telefone = 38312020;
    strcpy_s(ficha.endereco.rua, "Rua das Princesas");
    ficha.endereco.numero = 111;
    strcpy_s(ficha.endereco.bairro, "Ilha Grande");
    strcpy_s(ficha.endereco.cidade, "Ipojuca");
    strcpy_s(ficha.endereco.siglaEstado, "PE");
    ficha.endereco.CEP = 56900111;

    printf("\n\n Exibindo Registro\n\n");
    printf("\nNome: %s", ficha.nome);
    printf("\nTelefone: %li", ficha.telefone);
    printf("\nRua: %s", ficha.endereco.rua);
    printf(", %d", ficha.endereco.numero);
    printf("\nBairro: %s", ficha.endereco.bairro);
    printf("\t\tCidade: %s", ficha.endereco.cidade);
    printf(" UF: %s", ficha.endereco.siglaEstado);
    printf("\nCEP: %li", ficha.endereco.CEP);

    printf("\n\n\n\n");

    return 0;
}