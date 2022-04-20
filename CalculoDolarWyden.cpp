#include <iostream>
using namespace std;


	 int main()
	
	{
	float dolar;
	float reais;
	float quantia;
	
		cout <<"\n QUANTO TENHO EM REAIS:";
		cin>> reais;
	
		cout<< "\n INFORME A COTACAO DO DOLAR NO DIA DA VIAGEM: ";
		cin >> dolar;
	
		quantia = reais/dolar;
	
		cout<< "\n VOCE TEM EM DOLARES: $"<<quantia <<".00 " << "PARA VIAJAR AOS STATES ";
	
	return 0;
	}
		


