#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral

using namespace std;

void imprimir_msg();
float calcula_imposto();
int soma(int vlr1, int vlr2);
int altera_dado(int& vlr3);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float resultado;
	
	 imprimir_msg();
	 
	 resultado = calcula_imposto();
	
		cout << "Resultado do calculo:"<<resultado<<endl<<endl;
		
		int resultado_soma;
		
		resultado_soma = soma(10,20);
		
		cout << "Resultado da soma:"<<resultado_soma<<endl<<endl;
		
			int vlr3;
			
			vlr3=20;
			
			
			altera_dado(vlr3);
			
				cout <<"Valor alterado:"<<vlr3<<endl<<endl;	
	system("pause");
	return 0;	
}

void imprimir_msg(){
	
	cout << "Olá Mundo\n\n";
}

float calcula_imposto(){
	
	float sal;
	float vlr_imposto;
	
		sal = 2000.00;
		vlr_imposto = sal *0.1;
	
	return vlr_imposto;	
}
int soma(int vlr1, int vlr2){
	int total;
	total = vlr1+vlr2;
	
	return total;
}
int altera_dado(int& vlr3){
	
vlr3 = 100;
	
}
