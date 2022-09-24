#include <cstdlib>
#include <iostream>

using namespace std;

/* 
   
   Exemplo de como é possível para funções membro chamarem outras funções membro
   também é demonstrada a implementação de métodos fora da declaração de
   uma struct através da sintaxe nomeDaClasse :: nomeDaFunção(lista de argumentos)
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
