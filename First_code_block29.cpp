#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

void FilaContrutor(int *Frente,int *Tras,int Fila[TAM]){
    int Contador;
    for(Contador = 0;Contador < TAM;Contador++){
    Fila[Contador] = 0;
    }
    *Frente = 0;
    *Tras = -1;
}
void ImprimeVetor(int Fila[TAM], int FilaTamanho){
    int Contador;
    for(Contador = 0;Contador < TAM;Contador++){
        cout << Fila[Contador]<<("º")<<endl;
    }
}
void FilaEnfileirar(int Fila[TAM],int Valor,int *Tras){
    if(*Tras == TAM -1){
        cout <<("Fila Cheia")<<endl;
    }else{
        *Tras = *Tras = 1;
        Fila[*Tras] = Valor;
        }
    }
int FilaTamanho(int *Tras,int *Frente){
    return (*Frente - *Tras) + 1;
}

int main(){

    int Frente,Tras,Fila[TAM],Valor;
    FilaContrutor(&Frente,&Tras,Fila);

    FilaEnfileirar(Fila,2,&Tras);
    FilaEnfileirar(Fila,4,&Tras);
    FilaEnfileirar(Fila,3,&Tras);
    FilaEnfileirar(Fila,8,&Tras);
    FilaEnfileirar(Fila,5,&Tras);
    FilaEnfileirar(Fila,4,&Tras);
    FilaEnfileirar(Fila,9,&Tras);
    FilaEnfileirar(Fila,6,&Tras);
    FilaEnfileirar(Fila,1,&Tras);
    FilaEnfileirar(Fila,7,&Tras);

    ImprimeVetor(Fila,FilaTamanho(&Tras,&Frente));

    return 0;
}
