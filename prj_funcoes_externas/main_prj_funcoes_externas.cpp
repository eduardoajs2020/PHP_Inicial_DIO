#include <cstdlib>
#include <iostream>

using namespace std;

/* 
   
   Exemplo de como � poss�vel para fun��es membro chamarem outras fun��es membro
   tamb�m � demonstrada a implementa��o de m�todos fora da declara��o de
   uma struct atrav�s da sintaxe nomeDaClasse :: nomeDaFun��o(lista de argumentos)
   Implementado por: Rafael Bortoletto Maman

*/   

struct teste

{

    int x;

    void altera_x(int v);

    //somente definicao implementacao vem depois, fora da classe

};

void teste::altera_x(int v) { x=v;}

    //esta ja e a implementacao codigo 

int main(int argc, char *argv[])
{
    teste a;

    //instaciacao de um objeto

    a.altera_x(10);

    //chamada da funcao membro com valor 10 que sera impresso a seguir

    cout << a.x;

    //imprimindo o dado membro
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
