#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral

using namespace std;



void bubbleSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5] = {13,23,3,8,1};
	int i;
	
	// antes da troca	
	imprimirVetor(vetor,5);
	cout << "\n\n";
	
	
	//=========================
	//	insertion sort
	//=========================
	bubbleSort(vetor,5);
	//=========================
	
	cout << "\n\n";
	
	// Depois da troca	
	imprimirVetor(vetor,5);
	
		
	cout << "\n\n";
	
	system("pause");
	return 0;	
}

void bubbleSort(int vet[], int tam){
	int continuarTroca;
	int temp;
	int i,j;
	
	
	//percorrer todos os numeros
	for(i=1; i<tam -1; i++){
		
		continuarTroca=false;
		
		//Sloop through numbers falling ahead
		
		for (j=0; j < tam-1-i; j++){
		cout << "-------------------------\n";
		imprimirVetor(vet,5);
		cout << "Comparando: " << vet[j] << "com :"<< vet[j+1] << endl;
		
		//Troca o numero mais alto.
		if (vet[j] > vet[j+1]){
			temp= vet[i];
			vet[j] = vet[j+1];
			vet[j+1] = temp;
			continuarTroca=true;
		}
		imprimirVetor(vet, 5);
		cout << "\n\n";	
		}
		
	//se estiver tudo ordenado
	if(!continuarTroca){
		break;
		
		}
	}
		
}


void imprimirVetor(int vet[], int tam){
	int i;
	
	cout << vet[0];

	//Apos a troca
	for(i =1; i<5; i++){
		cout << ", "<< vet[i];
	}
	cout << endl;
	
}

