#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{

   /*detectando o driver da placa gráfica*/
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy, i;
   float x1,y1,r;

   printf("\n\n\t\tAlgoritmo de Circulo\n\n");
   printf("Entre com as coordenadas do ponto (Xc,Yc):\n Ponto Central:\n");
   scanf("%f",&x1);
   scanf("%f",&y1);
   printf("Entre com as coordenadas do raio:\n");
   scanf("%f",&r);
   printf("\n\nPlotando o circulo(%f,%f,%f)",x1,y1,r);
   getch();

   /*inicializando o modo grafico*/
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n",grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   /*modo grafico inicializado sem erros*/

   /*chamando a funcao do circulo*/
   circle(x1,y1,r);
   getch();

   /*encerrando o modo grafico*/
   closegraph();
   return 0;
}

