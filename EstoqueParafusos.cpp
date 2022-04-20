#include <iostream>
#include <stdlib.h>


	using namespace std;
	
	
	int main()
	
	{
		
				
		const float PRECO_PARAFUSO = 1.50;
		const float PRECO_ARRUELA  = 2.00;
		const float PRECO_PORCA    = 2.50;
		
		string nome;
		float quantidade_parafusos, quantidade_arruelas, quantidade_porcas ;
		float total_parafusos, total_arruelas, total_porcas, total_pagar ;
		
		
		cout << "Digite seu nome: "; 
		cin >> nome; 
		
		cout << "\nDigite a quantidade de parafusos que deseja comprar: "; 
		cin >> quantidade_parafusos;
		
		cout << "Digite a quantidade de arruelas que deseja comprar: "; 
		cin >> quantidade_arruelas;

		cout << "Digite a quantidade de porcas que deseja comprar: "; 
		cin >> quantidade_porcas;
		
	
		total_parafusos = PRECO_PARAFUSO * quantidade_parafusos;
		total_arruelas = PRECO_ARRUELA * quantidade_arruelas;
		total_porcas = PRECO_PORCA * quantidade_porcas;
		
		total_pagar = total_parafusos + total_porcas + total_arruelas;		
		
		system("cls");
		
		 
		cout << "Cliente:           "<< nome<< "\n";
		cout << "===============================\n";
		cout << "Parafusos:         "<< quantidade_parafusos<< "\n";
		cout << "Arruelas:          " << quantidade_arruelas << "\n";
		cout << "Porcas:            "<< quantidade_porcas << "\n";
		cout << "===============================\n";
		cout << "Total a pagar:  R$ "<< total_pagar<<",00"<<"\n";
	
		return 0;
	}
