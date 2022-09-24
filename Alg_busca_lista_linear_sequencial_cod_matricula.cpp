#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral

using namespace std;

void insere(int matric[], int m, int& t, int tamanho);
void exibe(int matric[], int t);
int buscaSequencial(int matric[], int m, int t);
void remove(int matric[], int m, int& t);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
		int tam, matricula[5], mat, posicao, op;
		
		//Inicializa��o
		
		
	tam =0;
	
	do{
		system("cls");
		cout << "\nMenu - LISTA \n";
		cout << "\n0- Reiniciar a LISTA";
		cout << "\n1- Inserir matricula na LISTA";
		cout << "\n2- Exibir LISTA";
		cout << "\n3- Procurar matr�cula na LISTA";
		cout << "\n4- Remover matricula da LISTA";
		cout << "\n5- Sair";
		
		//Obtem a op��o
		cout << "\n\nDigite a op��o: ";
		cin >> op;
		
		
			system("cls");
		
		//Executa a op��o escolhida
		switch (op)
		{
			case 0: //reinicializa��o
				tam=0;
				break;
				
			case 1:
				cout << "\nDigite matricula a ser inserida: ";
				cin >> mat;
				
				insere(matricula, mat, tam, 5);
				break;
		
			case 2:
				exibe(matricula, tam);
				break;
				
			case 3:
				cout << "\nQual matricula a ser procurada? ";
				cin >> mat;
				
				posicao = buscaSequencial(matricula, mat, tam);
				if (posicao == -1)
					cout << "\nAten��o! Matricula n�o encontrada \n";
				else if(posicao == -2)
					cout << "\nAten��o! Matr�cula n�o encontrada \n";
				else
					cout << "\nMatricula encontrada na posi��o: " << posicao +1 << "\n";
				break;
				
			case 4:
				cout << "\nQual matricula a ser removida? ";
				cin >> mat;
				
				remove(matricula, mat, tam);				
				break;
				
			case 5:
				cout << "\nFinalizando o programa da LISTA. \n";
				break;
				
			default:
				cout << "\nOp��o inv�lida. \n";
						
		}
		
		cout << "\n\n";
		system("pause");
		
	
	} while(op!=5);
}

void insere(int matric[], int m, int& t, int tamanho)
{
	if(tamanho ==t)
		cout << "\nAten��o! \nLista cheia\n";
	else
	{
		matric[t] = m;
		t++;	
	}	
}

void exibe(int matric[], int t)
{
	int x;
	
	if(t==0){
		cout << "\nAten��o! \nLista vazia\n";
	}
	else
	{
		cout << "\nRela��o das Matr�culas\n";
		for(x=0; x < t; x++){
			cout << "\n" << matric[x] << " ";
		}	
	}	
}

int buscaSequencial(int matric[], int m, int t)
{
	int x;
	if(t==0)
	{
		return -1; //testa lista vazia
	}
	
	for(x=0; x < t; x++)
	{
		if (matric[x] ==m)
		{
			return x; //retorna o deslocamento do endere�o base
		}
	}
	return -2; // percorreu toda a lista e n�o achou	
}

void remove(int matric[], int m, int& t)
{
	int pos, x;
	pos = buscaSequencial(matric, m, t);
	
	if (pos == -1) //testando se a lista esta vazia
		cout << "\nAten��o! \nLista vazia\n";
	else if (pos == -2)
		cout << "\nAten��o! \nMatricula n�o encontrada";
	else
	{
	//Desloca todos os elementos da lista, se necess�rio, deixando vazios no final
	for(x=pos; x<t-1;x++)
	{
		matric[x] = matric[x+1];	
	}
	t--; //Atualiza o tamanho da lista
	cout << "\nMatricula Removida\n";
	}
}
