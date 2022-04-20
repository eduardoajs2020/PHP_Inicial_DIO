#include <iostream>

using namespace std;

int main()

{
	
	 int cardapio;
	 string pedido;
	 int quantidade;
	 float valor;
	 float total;
	 bool invalido=false;
	 
	 
		cout << "\n ================================== ";
	
		cout << "\n Informe o codigo do seu pedido: ";
		cout << "\n ================================== ";
		
		cout << "\n 100 - Hamburguer - R$ 5,50: ";
		cout << "\n 101 - Cachorro-quente - R$ 4,50: ";
		cout << "\n 102 - Milkshake - R$ 7,00: ";
		cout << "\n 103 - Pizza brotinho - R$ 8,00: ";
		cout << "\n 104 - Cheeseburguer - R$ 8,50: ";
		
		cout << "\n ================================== ";
		cout << "\n Sua opcao: ";
		cin >> cardapio;
		cout << "\n ================================== ";
		cout << "\n Informe a quantidade: ";
		cin >> quantidade;
	
switch (cardapio)

  {

    case 100:

      pedido = "Hamburguer - R$ 5,50";
		valor = 5.50;
      break;

    case 101:

      pedido = "Cachorro-quente - R$ 4,50";
		valor = 4.50;
      break;
      
	case 102:

      pedido = "Milkshake - R$ 7,00";
		valor = 7.00;
      break;
      
	case 103:

      pedido="Pizza brotinho - R$ 8,00";
		valor = 8.00;			
      break;
      
	case 104:

      pedido="Cheeseburguer - R$ 8,50 ";
		valor = 8.50;	
      break;
      
      	default:

      cout << pedido <<"\n Pedido invalido, favor digitar uma das opcoes abaixo para prosseguir com a compra!";
      invalido=true;
      return main();
      
	}
	  	
   if (!invalido)
  
  {
    
  total = valor*quantidade;
  cout << "\n ================================== ";
  cout <<"\n O seu pedido e: " << quantidade<<" " << pedido;
  cout <<"\n O total a pagar sera: R$ " <<total<<",00" ;
  }
 
}
