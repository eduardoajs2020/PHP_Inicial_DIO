#include <iostream>
		
	using namespace std;
	
	int main()
	
	{
		

		const int salarioMinimo= 1000.00;
		int salario;
		
	
		cout << "\n Informe o valor do seu salario: ";
		cin >> salario;
	
			
		if(salario >= salarioMinimo)
		{
			cout << "\n Parabens, voce ganha mais que o minimo!";
		}
		else
		{
			cout <<  "\n Que pena, voce ganha muito pouco!";
		}
		
		return 0;
		
}
	
