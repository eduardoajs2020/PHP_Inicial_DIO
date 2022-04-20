#include <iostream>

using namespace std;
	
	
	int main()
	
	{
			
		
		float qtdeDin, valComb, qtdeLitros;
		
	
		cout << "\n Quanto custa o litro do combustivel? R$ ";
		cin >> valComb;
		
		cout << "\n Quantos reais voce tem? R$ ";
		cin >> qtdeDin;
	
				
		qtdeLitros=qtdeDin/valComb;	
		
		 
		cout<< "Com R$ "<< qtdeDin << " voce consegue abastecer "<< qtdeLitros<< " litros de combustivel.";
		
		return 0;
	}
