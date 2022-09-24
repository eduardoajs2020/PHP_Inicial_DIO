#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>//textos em geral

using namespace std;

struct Coordenada{
	int x, y, z;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Coordenada ponto[4];
	
	
	ponto[0].x=10;
	ponto[0].y=20;
	ponto[0].z=50;
	
	cout <<"Ponto A - x:" <<ponto[0].x << endl;
	cout <<"Ponto A - y:" <<ponto[0].y << endl;
	cout <<"Ponto A - z:" <<ponto[0].z << endl << endl;
	
	ponto[1].x=33;
	ponto[1].y=44;
	ponto[1].z=66;
	
	cout <<"Ponto B - x:" <<ponto[1].x << endl;
	cout <<"Ponto B - y:" <<ponto[1].y << endl;
	cout <<"Ponto B - z:" <<ponto[1].z << endl << endl;
	
	
	ponto[2].x=4;
	ponto[2].y=7;
	ponto[2].z=9;
	
	cout <<"Ponto C - x:" <<ponto[2].x << endl;
	cout <<"Ponto C - y:" <<ponto[2].y << endl;
	cout <<"Ponto C - z:" <<ponto[2].z << endl << endl;
	
	
	ponto[3].x=40;
	ponto[3].y=70;
	ponto[3].z=90;
	
	cout <<"Ponto D - x:" <<ponto[3].x << endl;
	cout <<"Ponto D - y:" <<ponto[3].y << endl;
	cout <<"Ponto D - z:" <<ponto[3].z << endl << endl;
	
	
	system("pause");
	return 0;	
}
