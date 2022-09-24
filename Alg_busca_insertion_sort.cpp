#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral

using namespace std;



void insertionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5] = {13,23,3,8,1};
	int i;
	
	// antes da troca	
	imprimirVetor(vetor,5);
	
	//=========================
	//	insertion sort
	//=========================
	insertionSort(vetor,5);
	//=========================
	
	cout << "\n\n";
	
	// Depois da troca	
	imprimirVetor(vetor,5);
	
	//Apos a troca
	//for (i=0; i<5; i++){
	//	cout << vetor[i] << "\t";
	//}
	
	cout << "\n\n";
	
	system("pause");
	return 0;	
}

void insertionSort(int vet[], int tam){
	int valueInsert;
	int posInsert;
	int i;
	
	
	//percorrer todos os numeros
	for(i=1; i<tam; i++){
		
		//Selecione um valor a ser inserido
		valueInsert = vet[i];
		
		//Selecione a posição onde o numero deve ser inserido
		posInsert=i;
		
		cout<< "--------------------------\n";
		imprimirVetor(vet,5);
		cout<< "--------------------------\n";
		cout<< "Valor: " <<valueInsert<< endl;
		cout<< "Posição Inserção: "<< posInsert << endl<<endl;
		
		
		//verifique se anterior não é maior que o valor a ser inserido
		while(posInsert > 0 && vet[posInsert -1]> valueInsert){
		vet[posInsert]= vet[posInsert -1];
		posInsert--;
		imprimirVetor(vet, 5);	
		}
		
		if(posInsert !=i){
			cout << "\tInsere: "<< valueInsert << " na posição: "<< posInsert << endl;
			vet[posInsert] = valueInsert;
		}
	}
	imprimirVetor(vet,5);
	
	cout << "\n\n";
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

	


