#include <stdio.h>
#include <stdlib.h>
/**
* author Fábio Moreira
  from  Brazil Fortaleza
  email fabone.moreira@gmail.com
*/
int main(int argc, char *argv[])
{
     int qtDiscos=6;//Chage the number disc for check
     int tamanhoMax=(int) pow(2, qtDiscos) - 1;
     int sequenciaPares[3];//para pares
     int indexPar=0;
     int indexImpar=0;
     int sequenciaImpares[3];//para impares
     int i=0;
      if (qtDiscos % 2 == 0) {
          sequenciaPares[0]=12;
          sequenciaPares[1]=23;
          sequenciaPares[2]=31;
          ////////////////////////
          sequenciaImpares[0]=13;
          sequenciaImpares[1]=12;
          sequenciaImpares[2]=32;
        }else{
          sequenciaPares[0]=13;
          sequenciaPares[1]=32;
          sequenciaPares[2]=21;
          ////////////////////////
          sequenciaImpares[0]=12;
          sequenciaImpares[1]=13;
          sequenciaImpares[2]=23;
      }
        for (i = 0; i < tamanhoMax; i++) {
                if (i % 2 == 0) {
                    if (indexPar > 2) {
                        indexPar = 0;
                    }
                    printf(" %d ---> %d \n",sequenciaPares[indexPar]/10,sequenciaPares[indexPar]%10);
                    indexPar++;
                } else {
                    if (indexImpar > 2) {
                        indexImpar = 0;
                    }
                    printf(" %d ---> %d \n",sequenciaImpares[indexImpar]/10,sequenciaImpares[indexImpar]%10);
                    indexImpar++;
                }
          }

  system("PAUSE");    
  return 0;
}
