#include <iostream>
		
	using namespace std;
	
	int main()
	
	{
		

		float num1, num2, op, resultado;
		
	
		cout << "\n Escreva o 1 numero: ";
		cin >> num1;
		
		cout << "\n Escreva o 2 numero: ";
		cin >> num2;
		
		cout << "\n ================================== ";
	
		cout << "\n Escolha a operacao matematica: ";
		
		cout << "\n 1- Adicao: ";
		cout << "\n 2 - Subtracao: ";
		cout << "\n 3 - Multiplicacao: ";
		cout << "\n 4 - Divisao: ";
		
		cout << "\n ================================== ";
		cout << "\n Opcao: ";
		cin>> op;
		
			
		if(op==1)
		{
			resultado=num1+num2;
			cout << num1<< " + " << num2 << " =" << resultado;
		}
		else if(op==2)
		{
			resultado=num1-num2;
			cout << num1<< " - " << num2 << " =" << resultado;
		}
		
		else if(op==3)
		{
			resultado=num1*num2;
			cout << num1<< " * " << num2 << " =" << resultado;
		}
		else if(op==4)
		{
			resultado=num1/num2;
			cout << num1<< " / " << num2 << " =" << resultado;
		}
		
		else 
		{
			cout <<  "\n Opcao invalida ";
			cout << "\n ================================== ";
			cout << "\n ================================== ";
			return main();
		}
		
}
