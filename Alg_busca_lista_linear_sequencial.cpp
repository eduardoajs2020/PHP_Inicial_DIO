#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral

using namespace std;

void insere(int codigo[], int&, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[], int t);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam, codigoProduto[5], op;
	
	//Inicialização
	
	tam =0;
	
	do{
		//Obtem a opção
		system("cls");
		cout << "\nMenu - LISTA \n";
		cout << "\n0- Reiniciar a LISTA";
		cout << "\n1- Inserir código do produto na LISTA";
		cout << "\n2- Exibir LISTA";
		cout << "\n3- Exibir tamanho da LISTA";
		cout << "\n4- Exibir um elemento da LISTA";
		cout << "\n5- Sair";
		
		//Obtem a opção
		cout << "\n\nDigite a opção: ";
		cin >> op;
		
		system("cls");
		
		//Executa a opção escolhida
		switch (op)
		{
			case 0: //reinicialização
				tam=0;
				break;
				
			case 1:
				insere(codigoProduto, tam, 5);
				break;
		
			case 2:
				exibe(codigoProduto, tam);
				break;
				
			case 3:
				cout << "\nTamanho da LISTA: " << tam;
				break;
				
			case 4:
				elemento(codigoProduto, tam);
				break;
				
			case 5:
				cout << "\nFinalizando o programa da LISTA. \n";
				break;
				
			default:
				cout << "\nOpção inválida. \n";
						
		}
		
		cout << "\n\n";
		system("pause");
		
		} while (op!=5);
	}
	
	void insere(int codigo[], int& t, int tamanho)
	{
			int prod;
			
			// Verifica se a lista está cheia
			if(tamanho == t)
				cout << "\nAtenção! \nLista cheia. \n";
				
			else
			{
				cout << "\nDigite o código do produto a ser inserido: ";
				cin >> prod;
				
				codigo[t] = prod;
				
				t++;
			}
	}
	
	void exibe(int codigo[], int t)
		{
			int x;
			
			// Verifica se tem algum elemento na lista
			if(t == 0)
				cout << "\nAtenção! \nLista vazia. \n";
				
			else
			{
				cout << "\nRelação dos Códigos. \n ";
				
				for (x=0; x<t; x++){
					cout << codigo[x]<<"\n";
				}
			}
	}
	


void elemento(int codigo[], int t)
		{
			int prod, posicao;
			
			if(t == 0)
				cout << "\nAtenção! \nLista vazia. \n ";
				
			else
			{
				cout << "\nQual a posição que deseja? ";
				cin >> posicao;
				posicao--;
				
				if (posicao >= t)
					cout << "\nAtenção! \nNenhum codigo armazenado ou posiçao iniexistente. \n ";
				
				else
					cout << "\nCodigo: " << codigo[posicao] << "\n ";
			}
	}	
	
	
	
	


