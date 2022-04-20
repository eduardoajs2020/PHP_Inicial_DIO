#include <iostream>

	using namespace std;
	
	
	int main()
	
	{
		
				double numero, atual = 1, fatorial = 1;
		
	
		cout << "\n DIGITE UM NUMERO:";
		cin >> numero;
		
		while(atual <= numero)
		{
			fatorial = fatorial * atual;
 			atual = atual + 1;
		}
		
	
		cout<< "O fatorial de "<< numero<< " e: "<< fatorial<<"\n";
			
		return 0;
	}
	
	
