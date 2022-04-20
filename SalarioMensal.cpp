	#include <iostream>
	
		
	using namespace std;
	
	
	int main()
	
	{
		int idade;
		float salarioHora, horasTrabalhadas, salarioMensal;
		string nome, sobrenome;
		
	cout << "\n QUAL E O SEU NOME? ";
		cin >> nome;
       
      
	
	cout << "\n QUAL O SEU SOBRENOME? ";
		cin >> sobrenome;
    
	
	cout << "\n QUANTOS ANOS VOCE TEM? ";
		cin >> idade;	
	
		
	
	 cout <<"\n ENTAO " << nome << " " << sobrenome << ", QUANTO VOCE RECEBE POR HORA? ";
		cin >> salarioHora;
	
	
	
		cout << "\n AGORA QUE JA NOS CONHECEMOS, VOU TE CHAMAR DE " << nome << "."<< "\n" ;
			
		cout <<"\n ENTAO SR. " << nome << ", ME CONTA QUANTAS HORAS TRABALHOU DURANTE ESTE MES? ";
		cin >> horasTrabalhadas;
			
	
		salarioMensal= salarioHora*horasTrabalhadas;
		
		cout <<"\n ";
		
		cout << nome << " , TE DIGO QUE, SE O SEU SALARIO POR HORA E ESSE, VOCE GANHA " << "R$ " << salarioMensal << ",00"<< " POR MES!";
		
				
		return 0;
		}
	
