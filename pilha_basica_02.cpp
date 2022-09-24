#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral
#include<cstdlib>


#define TAM 100

using namespace std;

void push(float p[], int& t, float v);
float pop(float p[], int& t);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int t = -1; // Inicialização
	float a, b, p[TAM];
	char s[10];
	
	system("color f1");
	cout << "\n********************************************\n";
	cout << "* Calculadora para quatro operações pós-fixa \n";
	cout << "* Digite números e operadores *\n";
	cout << "* Digite s para sair *\n";
	cout << "\n*******************************************\n";
	do
	{
		cout << ": ";
		cin >> s;
		
		switch(s[0])
		{
			case '+':
			a = pop(p, t);
			b = pop(p, t);
			cout << "\n" << a+b << "\n";
			push(p,t,a+b);
			break;
			
			case '-':
			a = pop(p, t);
			b = pop(p, t);
			cout << "\n" << a-b << "\n";
			push(p,t,a-b);
			break;
			
			case '*':
			a = pop(p, t);
			b = pop(p, t);
			cout << "\n" << a*b << "\n";
			push(p,t,a*b);
			break;
			
			case '/':
			a = pop(p, t);
			b = pop(p, t);
			
			if(a==0)
				cout << "\nOperação inválida: divisão por 0.\n";
			else
			{
				cout << "\n" << a/b << "\n";
				push(p,t,a/b);
			}
			break;
			
		default:
			push(p,t, atof(s));
		}
			
	}while(s[0]!='s');
		
	system("pause");
}

//Insere o elemento na pilha

void push(float p[], int& t, float v)
{
	if(t ==TAM -1)
		cout << "\nAtenção. \nPilha Cheia\n";
	else
	{
		t++; // atualiza o topo
		p[t] = v; //pilha recebe valor
	}	
}

// Remove o elemento da pilha

float pop(float p[], int& t)
{
	float v;
	if( t== -1)
	{
		cout <<"\nAtenção. \nPilha Vazia\n";
	}
	else
	{
		v = p[t];//guarda o valor do topo
		t--; // atualiza o topo
		return v;
	}	
}
