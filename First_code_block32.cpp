#include <iostream>
#include <string>
#include <stdio.h>
#define TAM 30

//Selection Sort

using namespace std;

void ImprimeVetor(int Vetor[TAM]){
    int Contador;
    cout <<"\n";

    for(Contador = 0;Contador < TAM;Contador++){
        cout <<("|")<< Vetor[Contador]<<("|");
    }
}

void VetorContrutor(int Vetor[TAM]){
    int Contador,Contador2 = TAM + 1;

    for(Contador = 0;Contador < TAM ;Contador++){
        Contador2--;
        Vetor[Contador] = Contador2;
        }
}
void SelectionSort(int Vetor[TAM]){
    int PosicaoMenor,AUX,Contador1,Contador2;

    for(Contador1 = 0;Contador1 < TAM;Contador1++){

        PosicaoMenor = Contador1;

        for(Contador2 = Contador1 + 1;Contador2 < TAM;Contador2++){

            if(Vetor[Contador2] < Vetor[PosicaoMenor]){
                PosicaoMenor = Contador2;
            }
        }

        if(PosicaoMenor != Contador1){
            AUX = Vetor[Contador1];
            Vetor[Contador1] = Vetor[PosicaoMenor];
            Vetor[PosicaoMenor] = AUX;
        }
        ImprimeVetor(Vetor);
    }
}

int main(){
    int Vetor[TAM];

    VetorContrutor(Vetor);

    ImprimeVetor(Vetor);
    cout <<("\nAntes Do Selection Sort\n\n");

    SelectionSort(Vetor);

    cout <<("\n\nDepois Do Selection Sort");
    ImprimeVetor(Vetor);

    return 0;
}
