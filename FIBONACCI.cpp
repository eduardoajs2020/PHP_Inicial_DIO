#include <iostream>

	using namespace std;
	
	
	 long fibonacci(long posicao)
	{		
		if (posicao == 1)
		{
			return 0;
		}
	    else if (posicao == 2)
		{
			return 1;
		}

		return fibonacci(posicao - 1) + fibonacci(posicao - 2);		
	}


	
	int main()
	
{
	long numero;
	
	
	cout << "Digite a quantidade de posicoes que deseja calcular: ";
	cin >> numero;
	
	for (int i=0; i <=numero; i++)
	
	{
		
	cout << fibonacci(i) << " ";
	
	}
	
}
	
