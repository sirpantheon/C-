#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#define TAM 30

using namespace std;
//Shell Sort

void VetorContrutor(int Vetor[TAM]){
    int Contador,Contador2 = TAM + 1;

    for(Contador = 0;Contador < TAM ;Contador++){
    Contador2--;
    Vetor[Contador] = Contador2;
    }
}

void ImprimeVetor(int Vetor[TAM]){
    int Contador;
    cout <<("\n");

    for(Contador = 0;Contador < TAM;Contador++){
        cout <<("|")<< Vetor[Contador]<<("|");
    }
}

void ShellSort(int Vetor[TAM]){

    int AUX1,AUX2,Atual;
    int H = 1;

    while(H<TAM){
        H = 3*H+1;
    }

    while(H > 1){
        H = H/ 3;

        for(AUX1 = 1;AUX1 < TAM;AUX1++){
            Atual = Vetor[AUX1];
            AUX2 = AUX1 - H;

            while((AUX2 >= 0) && (Atual < Vetor[AUX2])){
                Vetor[AUX2 + H] = Vetor[AUX2];
                AUX2 = AUX2 - H;
                }

            Vetor[AUX2 + H] = Atual;
            ImprimeVetor(Vetor);
            }
        }
}

using namespace std;

int main(){
    int Vetor[TAM];

    VetorContrutor(Vetor);

    ImprimeVetor(Vetor);
    cout <<("\nAntes Do Shell Sort\n\n");

    ShellSort(Vetor);

    cout <<("\n\nDepois Do Shell Sort");
    ImprimeVetor(Vetor);

    return 0;
}
