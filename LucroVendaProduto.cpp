#include <iostream>

	using namespace std;
	
	
	int main()
	
	{
		
				float valorCompra, valorVenda;
		
	
		cout << "\n Qual o valor de aquisicao do produto?  R$ ";
		cin >> valorCompra;
	
				
		valorVenda = valorCompra + (valorCompra*20/100);	
		
		 
		cout<< "O valor final e R$ "<< valorVenda << ".00";
		
		return 0;
	}
	
