#include <iostream>
#include <string>
#include <stdlib.h>
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
        Pilha[ValorRetirado] = 0;
        cout <<("Valor Removido ")<<endl;
    }
}

int PilhaVazia(int *Topo){
    if(*Topo == -1){
        return true;
    }else{
        return false;
    }
}
void PilhaContrutor(int Pilha[TAM], int *Topo){
    int Contador;
    *Topo = -1;
    for(Contador = 0;Contador < TAM;Contador++){
        Pilha[Contador] = 0;
    }
}
int main(){

    int Pilha[TAM],Topo,ValorAdd;
    int Contador,ValorRetirado,Decisao;

    PilhaContrutor(Pilha, &Topo);

    for(Contador = 0;Contador < TAM + 1;Contador++){
        if(PilhaVazia(&Topo)== true){
        cout << ("Pilha Esta Vazia")<<endl;
     }else{
        cout << ("A Pilha tem ")<<Contador<<(" itens")<<endl;
     }
        cout <<("Digite Um Valor Para ADD Na Pilha: ");
        cin >> ValorAdd;
        PilhaPush(Pilha,ValorAdd,&Topo),
        system("cls");
        ImprimeVetor(Pilha);
    }

    cout <<("Deseja Retirar Algum Valor?")<<endl;
    cout <<("Digite 1 para sim ")<<endl<<("digite 2 para nao");
    cin >>Decisao;

    switch(Decisao){
    case 1:
        cout <<("Qual Valor deseja retirar: ");
        cin >>ValorRetirado;
        PilhaPop(Pilha,&Topo,ValorRetirado);
        ImprimeVetor(Pilha);
    break;
    case 2:
        cout <<("Programa Finalizado");
    break;
    default:
        cout <<("Digito Invalido Programa Finalizado");
    break;
    }
    return 0;
}
