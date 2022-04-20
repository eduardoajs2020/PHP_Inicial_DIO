#include <iostream>
#include <bits/stdc++.h>


using namespace std;

// função Fibonacci recursiva
long fibonacci(long numero)
{
  if((numero == 0 ) || (numero == 1)) // caso base
    return numero;
  else // passo recursivo
    return fibonacci(numero - 1) + fibonacci(numero - 2);
}
 
int main(int argc, char *argv[]){
  int valor = 10;
 
  // calcula o Fibonacci de 10
  cout << "O Fibonacci de 10 = " << fibonacci(10) << endl;
 
  system("PAUSE"); // pausa o programa
  return 0;
}

