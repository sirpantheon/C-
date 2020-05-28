#include <iostream>
#include <string>
#define TAM 10

using namespace std;

void ImprimeVetor(int Vetor[TAM]){
    int Contador;
    for(Contador = 0;Contador < TAM;Contador++){
        cout << Vetor[Contador]<<("º")<<endl;
    }
}

void PilhaPush(int Pilha[TAM],int Valor,int *Topo){
    if(*Topo == TAM -1){
        cout << "Pilha Cheia"<<endl;
    }else{
        *Topo = *Topo + 1;
        Pilha[*Topo]= Valor;
    }
}

void PilhaPop(int Pilha[TAM],int *Topo,int ValorRetirado){

    if(*Topo == -1){
        cout <<("Pilha Vazia");
    }else{
        cout <<("Valor Removido: ")<<Pilha[*Topo];
        ValorRetirado = Pilha[*Topo];
        Pilha[*Topo] = 0;
        *Topo = *Topo - 1;
    }
}

int main(){

    int Pilha[TAM] = {0,0,0,0,0,0,0,0,0,0},Topo = -1,ValorAdd;
    int Contador,ValorRetirado;

    for(Contador = 0;Contador < TAM + 1;Contador++){
        cout <<("Digite Um Valor Para ADD Na Pilha: ");
        cin >> ValorAdd;
        PilhaPush(Pilha,ValorAdd,&Topo),
        ImprimeVetor(Pilha);
    }

    cout <<("Qual Valor deseja retirar: ");
    cin >>ValorRetirado;

    PilhaPop(Pilha,&Topo,ValorRetirado);
    ImprimeVetor(Pilha);

    return 0;
}
