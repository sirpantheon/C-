#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 30

//Insertion Sort

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

void InsertionSort(int Vetor[TAM]){
    int AUX1,AUX2,Atual;

    for(AUX1 = 1;AUX1 < TAM;AUX1++){
        Atual = Vetor[AUX1];
        AUX2 = AUX1 - 1;

        while((AUX2 >= 0) && (Atual < Vetor[AUX2])){
            Vetor[AUX2 + 1] = Vetor[AUX2];
            AUX2--;
            }

        Vetor[AUX2 + 1] = Atual;
        ImprimeVetor(Vetor);
    }
}

int main(){
    int Vetor[TAM];

    VetorContrutor(Vetor);
    ImprimeVetor(Vetor);
    cout <<("\nAntes Do Insertion Sort\n\n");
    cout<<("\n-----------------------------------------------------------------------");
    InsertionSort(Vetor);
    cout<<("\n-----------------------------------------------------------------------");
    cout <<("\n\nDepois Do Insertion Sort");
    ImprimeVetor(Vetor);

    return 0;
}
