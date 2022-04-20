#include <iostream>
		
	using namespace std;
	
	int main()
	
	{
		

		
		int nota,frequencia;
		
	
		cout << "\n Informe a nota do aluno: ";
		cin >> nota;
		
		cout << "\n Informe a frequencia do aluno: ";
		cin >> frequencia;
	
			
		if(nota >= 70 && frequencia >= 75)
		{
			cout << "\n Parabens, voce foi aprovado!";
		}
		else
		{
			cout <<  "\n Que pena, voce foi reprovado!";
		}
		
		return 0;
		
}
	
