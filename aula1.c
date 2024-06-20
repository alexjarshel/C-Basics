#include <stdio.h>

#define TAMANHO_VETOR 5

int main(){
    //declaração de vetor com 5 elementos
    int vetor[TAMANHO_VETOR] = {1,2,3,4,5};
    int vetor2[TAMANHO_VETOR];
    float soma = 0;


    //prenchendo detalhes do vetor
    printf("insira os %d numeros do vetor \n", TAMANHO_VETOR);
    for(int i =0;i<TAMANHO_VETOR;i++){
        printf("numero %d : " , i+1);
        scanf("%d", &vetor[i]);
    }

    // acessando e exibndo detelhes e soma do vetor
    for(int i =0;i<TAMANHO_VETOR;i++){
        printf("Valor do elemento %d : %d \n",i,vetor[i]);
        soma += vetor[i];
    }

    printf("soma do Vetor %f \n", soma );
    printf("Media do Vetor %f \n", soma/TAMANHO_VETOR );



    return 0;
}