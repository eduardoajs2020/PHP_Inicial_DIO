#include <cstdlib>
#include <iostream>

using namespace std;

/*

      Exemplo de Polimorfismo
      Polimorfismo, do grego: muitas formas. Polimorfismo é a capacidade de um 
      operador executar a ação apropriada dependendo do tipo do operando. Aqui 
      operando e operador estão definidos num sentido mais geral: operando pode 
      significar argumentos atuais de um procedimento e operador o procedimento, 
      operando pode significar um objeto e operador um método, operando pode 
      significar um tipo e operador um objeto deste tipo. Neste caso usamos uma
      função que tem o mesmo nome do construtor da classe, o compilador sabe distinguir
      entre qual função é o construtor e qual é uma função membro. Isto se chama
      Copy constructor. 
      Implementado por: Rafael Bortoletto Maman

*/

struct ponto
{

   float x;

   float y;

   ponto(float a,float b);

   //construtor tambem pode ser inline ou nao

   ponto(ponto& a); //copy constructor

   void mostra(void);

   void move(float dx,float dy);

};

ponto::ponto(float a,float b)

{

    x=a;

    y=b;

}

ponto::ponto(ponto& a)

{

    x=a.x;

    y=a.y;

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

    ponto ap2(ap);

    ap2.mostra();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
