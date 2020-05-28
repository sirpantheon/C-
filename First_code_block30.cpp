#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 30

//bubble sort

using namespace std;

void VetorContrutor(int Vetor[TAM]){
    int Contador,Contador2 = TAM + 1;
    for(Contador = 0;Contador < TAM ;Contador++){
        Contador2--;
        Vetor[Contador] = Contador2;
        }
}

void ImprimeVetor(int Vetor[TAM]){
    int Contador;
    cout <<"\n";
    for(Contador = 0;Contador < TAM;Contador++){
        cout <<("|")<< Vetor[Contador]<<("|");
    }
}

void BubbleSort(int Vetor[TAM]){
    int Posicao1,Posicao2,Auxiliar;
    for(Posicao1 = 0; Posicao1 < TAM;Posicao1++){
        ImprimeVetor(Vetor);
        for(Posicao2 = Posicao1 + 1;Posicao2 < TAM;Posicao2++){

            if(Vetor[Posicao1] > Vetor[Posicao2]){
                Auxiliar = Vetor[Posicao1];
                Vetor[Posicao1] = Vetor[Posicao2];
                Vetor[Posicao2] = Auxiliar;
                }
        }
    }
}

int main(){
    int Vetor[TAM];
    VetorContrutor(Vetor);

    ImprimeVetor(Vetor);
    cout<< ("\nAntes Do Bubble Sort\n");
    BubbleSort(Vetor);
    cout<< ("\n\nDepois Do Bubble Sort");
    ImprimeVetor(Vetor);
    cout <<"\n\n";

    return 0;
}
