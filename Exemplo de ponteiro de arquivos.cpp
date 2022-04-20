#include <iostream>

	using namespace std;
	
	
	int main()
	{
		string veiculo="carro";
		string *pv;
		
			pv=&veiculo; //ponteiro pv recebe o endereço de veiculo.
		
		cout <<  pv << "\n" << &veiculo;
		
		*pv="moto";  //no endereço apontado por *pv, adicione o valor "moto"
		
		cout <<"\n" << veiculo << "\n" <<*pv;
		
		
		return 0;
		
	}
