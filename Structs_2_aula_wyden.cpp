#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral

using namespace std;

struct Coordenada{
	int x, y, z;
};

void imprimirDados(Coordenada pto);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Coordenada pontoA;
	Coordenada pontoB;
	
	
	pontoA.x=10;
	pontoA.y=20;
	pontoA.z=30;
	
	cout <<"digite a coordenada X: ";
	cin>> pontoB.x;
	
		
	cout <<"digite a coordenada Y: ";
	cin>> pontoB.y;
	
		
	cout <<"digite a coordenada Z: ";
	cin>> pontoB.z;
	
	cout << endl<<endl;
	
	
	imprimirDados(pontoA);
	imprimirDados(pontoB);
	
		
	
	system("pause");
	return 0;
		
}
void imprimirDados(Coordenada pto){
	cout <<"Ponto B - X:" <<pto.x << endl << endl;
	cout <<"Ponto B - y:" <<pto.y << endl << endl;
	cout <<"Ponto B - Z:" <<pto.z << endl << endl;
	cout << endl<<endl;
}
