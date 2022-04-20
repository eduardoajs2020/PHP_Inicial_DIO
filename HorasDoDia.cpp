#include <iostream>
		
	using namespace std;
	
	int main()
	
	
	{
		

		int horaAtual;
		
	
		cout << "\n Informe a hora atual: ";
		cin >> horaAtual;
	
			
		if (horaAtual >= 18 && horaAtual <= 24)
		{
			cout << "Sao "<< horaAtual <<" Horas da Noite!";
		}
		if (horaAtual >= 13 && horaAtual < 18)
		{
			cout << "Sao" << horaAtual<< " Horas da tarde!";
		}
		if (horaAtual >= 0 && horaAtual < 13)
		{
			cout << "Sao "<< horaAtual << " Horas da manha!";
		}
		if (horaAtual > 24)
		{
			cout << "Essa nao e uma hora valida";
			
			return main();
		}
		else;
		
		return 0;
		
}






		
