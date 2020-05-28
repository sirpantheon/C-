#include <iostream>
#include <string>
#include <new>
#define TAM 10

using namespace std;

int BuscaBinaria(int Vetor[TAM],int ValorProucurado, int *Posicao){
   int Esquerda = 0,Direita = TAM - 1,Meio;

   while(Esquerda <= Direita){
    Meio = Esquerda + Direita/2;
   if(ValorProucurado==Vetor[Meio]){
        *Posicao = Meio;
        return 1;
   }else{
   if(Vetor[Meio]<ValorProucurado){
       Esquerda = Meio + 1;
   }else{
        Direita = Meio - 1;
        }
    return 0;
        }
   }
}

void ImprimeVetor(int Vetor[TAM]){
    int Contador;
    for(Contador = 0;Contador < TAM;Contador++){
        cout << Vetor[Contador]<<("º")<<endl;
    }
}

int main(){

    int Vetor[TAM] = {69,91,45,57,78,23,89,78,86,21};
    int ValorProucurado,Contador,Posicao;

    ImprimeVetor(Vetor);

    cout << ("Qual Numero Deseja: ");
    cin >> ValorProucurado;

    if(BuscaBinaria(Vetor,ValorProucurado,&Posicao)==true){
        cout << ("O Valor foi Encontrado Na Posicao: ") << Posicao;
    }else{
        cout << ("Valor Nao encontrado");
    }

    return 0;
}
