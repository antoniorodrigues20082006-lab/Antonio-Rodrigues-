#include <stdio.h>
#include <string.h>

//Criação do territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main(){
    struct Territorio territorios [5];
    int i;
    printf("Cadastro dos Territorios \n");
    for(i = 0; i <5; i++) {
        printf("Territorio %d\n", i +1);
        
        //Nome do territorio
        printf("Digite o nome do seu territorio: ");
        scanf("%s", &territorios[i].nome);
        
        //Cor do exército
        printf("Digte a cor do seu exercito: ");
        scanf("%s", &territorios [i].cor);
        
        //Numeros de tropas
        printf("Digite o numero de tropas: ");
        scanf("%d", &territorios [i].tropas);
        
    }
    printf("\n\n Resumo dos territorios cadastrados\n");
    for(int i = 0; i < 5; i++){
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios [i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
    }
    printf("\nCadastro concluido.");
    return 0;
}