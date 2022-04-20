#include <iostream>
		
	using namespace std;
	
	int main()
	
	{
		

		float num, quadrado, cubo;
		
	
		cout << "\n Informe um numero qualquer: ";
		cin >> num;
	
		quadrado = num * num;
	    cubo = num * num * num;
		
		 
		cout<<"\n O numero ao quadrado e: " << quadrado;
		cout<<"\n E o seu cubo e: " << cubo;
		
		if(quadrado >= 25)
		{
			cout << "\n O quadrado e maior que 25";
		}
		else
		{
			cout << "\n O quadrado e menor que 25";
		}
	
		return 0;
	}
