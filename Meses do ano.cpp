#include <iostream>
		
	using namespace std;
	
	int main()
	
	{
		
		int numMes;
		string mesExtenso="";
		
		
		cout << "\n Informe o numero do mes: ";
		cin >> numMes;

		if (numMes ==1)
		{
			mesExtenso="Janeiro";
		}
		else if (numMes ==2)
		{
			mesExtenso="Fevereiro";
		}
		else if (numMes ==3)
		{
			mesExtenso="Marco";
		}
		else if (numMes ==4)
		{
			mesExtenso="Abril";
		}
		else if (numMes ==5)
		{
			mesExtenso="Maio";
		}
		else if (numMes ==6)
		{
			mesExtenso="Junho";
		}
		else if (numMes ==7)
		{
			mesExtenso="Julho";
		}
		else if (numMes ==8)
		{
			mesExtenso="Agosto";
		}
		else if (numMes ==9)
		{
			mesExtenso="Setembro";
		}
		else if (numMes ==10)
		{
			mesExtenso="Outubro";
		}
		else if (numMes ==11)
		{
			mesExtenso="Novembro";
		}
		else if (numMes ==12)
		{
			mesExtenso="Dezembro";
		}
		else
		{
			if(numMes>12 || numMes <1)
			{
				cout << "\n Mes invalido!!! ";
				cout << "\n ================================== ";
				return main();
			}
			
		}
		if(numMes <=12 && numMes>=1)
		{
		cout << "O numero " << numMes << " equivale ao mes de " << mesExtenso;
        }
	 }
  

