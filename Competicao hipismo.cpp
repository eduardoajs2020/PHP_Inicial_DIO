#include <iostream>
		
	using namespace std;
	
	int main()
	
	{


	int  idade;
	
		cout << "Digite a idade do Competidor: ";
		cin >> idade;

		if (idade >=7 && idade<=12)
		{
			cout <<"categoria Infantil";
		}
		else if (idade >=13 && idade<=17)
		{
			cout << "categoria Juvenil";
		}
		else if (idade >=18 && idade<=49)
		{
			cout << "categoria Adulto";
		}
		else if (idade >=50)
		{
			cout << "categoria Senior";
		}
		else
		{
			cout << "Voce ainda nao pode competir";
		}
	}
