#include <cstdlib>
#include <iostream>

using namespace std;


/* 
   
   Exemplo que demonstra a utilização de construtores para iniciar um objeto.
   Os construtores não possuem valor de retorno e seu nome deve ser o mesmo da classe
   e não pode ser chamado pelo usuário desta classe. Eles servem para iniciar os 
   atributos de uma classe de forma ordenada e apenas uma vez.
   Implementado por: Rafael Bortoletto Maman
   
*/
struct ponto
{

    float x;

    float y;

    public:

    ponto(float a,float b);

    //esse e o contrutor, note a ausencia do valor de retorno

    void mostra(void);

    void move(float dx,float dy);

};

ponto::ponto(float a,float b)

//construtor tem sempre o nome da classe.

{

    x=a;

    //inicia atributos da classe

    y=b;

    //coloca a casa em ordem

}

void ponto::mostra(void)

    {cout << "X:" << x << " , Y:" << y << endl;}

void ponto::move(float dx,float dy)
{

     x+=dx;

     y+=dy;

}


int main(int argc, char *argv[])
{
    
    ponto ap(0.0,0.0);

    ap.mostra();

    ap.move(1.0,1.0);

    ap.mostra();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
