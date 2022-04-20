#include <iostream>
		
	using namespace std;
	
	int main()
	
	{

	float lado1, lado2, lado3;
		
		cout << "Digite o valor no 1 lado do Triangulo: ";
		cin >> lado1;
		
		cout << "Digite o valor no 2 lado do Triangulo: ";
		cin >> lado2;
		
		cout << "Digite o valor no 3 lado do Triangulo: ";
		cin >> lado3;


		if (lado1==lado2 && lado2==lado3)
		{
			cout << "Triangulo Equilatero ";
		}
		 else if (lado1==lado2 || lado2==lado3 || lado3==lado1)
		{
			cout << "Triangulo Isosceles ";
		}
		else
		{
			cout << "Triangulo Escaleno ";
		}
		
}
		
