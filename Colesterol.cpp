#include <iostream>

	using namespace std;
	
	
	int main()
	
	{
		
				float idade, resultado;
				string nome;
		
	
		cout << "\n DIGITE SEU NOME:";
		cin >> nome;
		
		cout << "\n DIGITE SUA IDADE:";
		cin >> idade;
		
		cout << "\n DIGITE O RESULTADO DO SEU EXAME:";
		cin >> resultado;
		
		if(resultado > 170)
		{
				cout<< "O resultado do paciente "<< nome<< " esta alterado! "<<"\n";
		}
		
		else
		{
			cout<< "O resultado do paciente "<< nome<< " esta normal! "<<"\n";	
		}
		
			
		return 0;
		 
	}
