#include <iostream>

using namespace std;

class Pessoa{
	public:
	string nome;
	int idade;
	string raca;
	int poder;
	
	void supersayajin(){
		this->poder *= 10;
	};
};

int main(){
	Pessoa p1,p2,p3;
	
	p1.nome= "goku";
	p1.raca= "sayajin";
	p1.idade= 45;
	p1.poder= 8000;
	
	p2.nome= "vegeta";
	p2.raca= "sayajin";
	p2.idade= 60;
	p2.poder= 5000;
	
	p3.nome= "kuririn";
	p3.raca= "humano";
	p3.idade= 50;
	p3.poder= 3000;
	
	p2.supersayajin();
	
	if(p1.poder > p2.poder && p1.poder > p3.poder){
	
	cout << p1.nome <<"("<<p1.raca<<")\n"<<"Poder: "<< p1.poder <<"\n";	
		
	}
	
	else if(p2.poder > p1.poder && p2.poder > p3.poder){
	
	cout << p2.nome <<"("<<p2.raca<<")\n"<<"poder: "<< p2.poder <<"\n";	
		
	}
	
	else{
	
	cout << p3.nome <<"("<<p3.raca<<")\n"<<"poder: "<<p3.poder <<"\n";	
		
	}
	
	

	
	return 0;
}
