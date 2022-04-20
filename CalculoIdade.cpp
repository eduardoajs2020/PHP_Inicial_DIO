#include <iostream>

	using namespace std;
	
	
	int main()
	
	{
		
				float anoNasc, anoAtual, idade;
		
	
		cout << "\n ANO ATUAL:";
		cin >> anoAtual;
	
		cout<< "\n ANO DE NASCIMENTO : ";
		cin >> anoNasc;
		
		idade = anoAtual - anoNasc ;	
		
		 
		cout<< " \n VOCE TEM OU FARA: "  <<idade <<" ANOS " ;
		
		if(idade >= 16)
		{
			cout <<" \n E VOCE JA PODE VOTAR";
		}
		else
		{
			cout << "\n E VOCE AINDA NAO PODE VOTAR";
		}
	
		return 0;
	}


