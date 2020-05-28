#include <iostream>
#include <string>
#include <new>
#define TAM 10

using namespace std;

int BuscaSimples(int Vetor[TAM],int ValorProucurado, int *Posicao){
    int Contador;
    bool ValorEncontrado;

    for(Contador = 0;Contador < TAM;Contador++){
        if(Vetor[Contador] == ValorProucurado){
        ValorEncontrado = true;
        *Posicao = Contador;
        }
    }

    if(ValorEncontrado == true){
        return 1;
    }else{
        return 0;
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

    if(BuscaSimples(Vetor,ValorProucurado,&Posicao)==true){
        cout << ("O Valor foi Encontrado Na Posicao: ") << Posicao;
    }else{
        cout << ("Valor Nao encontrado");
    }

    return 0;
}
