#include <iostream>
		
	using namespace std;
	
	int main()
	
	{
		int numMes;
		char*mesExtenso;
	
cout << "Digite um n�mero do m�s ";
		cin >> numMes;
		cin >> mesExtenso;
		
		switch (numMes)
		
  {

    case 1:

       cout << mesExtenso << "janeiro";

      break;

    case 2:

       cout << mesExtenso<< "fevereiro";

        break;

    case 3:

       cout << mesExtenso << "mar�o";

        break;

    case 4:

       cout << mesExtenso << "abril";

        break;

    case 5:

       cout << mesExtenso << "maio";

        break;

    case 6:

       cout << mesExtenso << "junho";

        break;

    case 7:

       cout << mesExtenso << "julho";

        break;

    case 8:

      cout << mesExtenso << "agosto";

        break;

    case 9:

      cout <<  mesExtenso << "setembro";

        break;

    case 10:

       cout << mesExtenso << "outubro";

        break;

    case 11:

       cout << mesExtenso << "novembro";

        break;

    case 12:

       cout << mesExtenso << "dezembro";

        break;

    default:

      cout << "M�s inv�lido!!!";

}
	cout << "O n�mero " << numMes << " equivale ao m�s de "<< mesExtenso;
}
	
	

	
	
