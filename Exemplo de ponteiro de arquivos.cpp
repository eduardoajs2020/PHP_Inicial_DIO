#include <iostream>

	using namespace std;
	
	
	int main()
	{
		string veiculo="carro";
		string *pv;
		
			pv=&veiculo; //ponteiro pv recebe o endere�o de veiculo.
		
		cout <<  pv << "\n" << &veiculo;
		
		*pv="moto";  //no endere�o apontado por *pv, adicione o valor "moto"
		
		cout <<"\n" << veiculo << "\n" <<*pv;
		
		
		return 0;
		
	}
