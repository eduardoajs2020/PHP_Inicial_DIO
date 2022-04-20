#include <iostream>

	using namespace std;
	
	
	int main()
	
	{
		
				int diasVida, anosVida;
		
	
		cout << "\n Quantos dias voce viveu? ";
		cin >> diasVida;
	
				
		anosVida = diasVida/365;	
		
		 
		cout<< "voce viveu por "<< anosVida <<" anos" ;
		
		if(anosVida >= 18)
		{
			cout << ", entao voce e maior de idade!";
		}
		else
		{
			cout << ", entao voce ainda e menor de idade!";
		}
	
		return 0;
	}
