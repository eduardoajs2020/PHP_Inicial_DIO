#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float m,c,i,i2,n,j;
int op;
main(){
       printf("\n\tCALCULO DE JUROS COMPOSTOS");
       while(op != 9){
          printf("\n\n\tDIGITE SUA OPCAO:");
          printf("\n\n\t1-MONTANTE:\n\t2-CAPITAL:\n\t3-JUROS:\n\t4-TAXA DE JUROS:\n\t5-TEMPO:\n\t6-EQUIVALENCIA DE JUROS\n\t7-CAPITALIZACAO CONTINUADA:\n\t8-LIMPA TELA\n\t9-SAIR\n\n");
          printf("\n\tOPCAO = ");
          scanf("%d",&op);
             if(op < 0 || op > 9)
                printf("\n\n\tOPERACAO %d E INVALIDA!!!\n\n",op);
       switch (op){
              case 1:
                   printf("\n\nDIGITE O CAPITAL: ");
                   scanf("%f",&c);
                   printf("DIGITE TAXA DE JUROS: ");
                   scanf("%f",&i);
                   printf("DIGITE O PERIODO EM MESES: ");
                   scanf("%f",&n);
                   i2=i;
                   i = pow((1+(i/100)),n);
                   m = c * i;
                   printf("\n\nO MONTANTE GERADO DE UMA CAPITAL DE %.2f A UMA TAXA DE %.2f %%\nPOR %.0f MESES E DE %.2f\n\n",c,i2,n,m);
                   break;
              case 2:
                   printf("\n\nDIGITE O MONTANTE: ");
                   scanf("%f",&m);
                   printf("DIGITE TAXA DE JUROS: ");
                   scanf("%f",&i);
                   printf("DIGITE O PERIODO EM MESES: ");
                   scanf("%f",&n);
                   i2=i;
                   i = pow ((1+(i/100)),n);
                   c = m/i;
                   printf("\n\nO CAPITAL QUE GERA UM MONTANTE DE %.2f A UMA TAXA DE %.2f %%\nPOR %.0f MESES E DE %.2f\n\n",m,i2,n,c);
                   break;
              case 3:
                   printf("\n\nDIGITE O CAPITAL: ");
                   scanf("%f",&c);
                   printf("DIGITE TAXA DE JUROS: ");
                   scanf("%f",&i);
                   printf("DIGITE O PERIODO EM MESES: ");
                   scanf("%f",&n);
                   i2=i;
                   i = pow((1+(i/100)),n);
                   m = c * i;
                   j = m-c;
                   printf("\n\nOS JUROS DE UM CAPITAL DE %.2f A UMA TAXA DE %.2f %%\nPOR %.0f MESES E DE %.2f\n\n",c,i2,n,j);
                   break;           
              case 4:
                   printf("\n\nDIGITE O MONTANTE: ");
                   scanf("%f",&m);
                   printf("DIGITE O CAPITAL: ");
                   scanf("%f",&c);
                   printf("DIGITE O PERIODO EM MESES: ");
                   scanf("%f",&n);
                   i = pow ((m/c),1/n)-1;
                   printf("\n\nA TAXA USADA PARA GERAR O MONTANTE DE %.2f SOBRE UM CAPITAL DE %.2f \nNO PERIODO DE %.2f MESES E %.2f %%\n\n",m,c,n,i*100);
                   break;
              case 5:
                   printf("\n\nDIGITE O MONTANTE: ");
                   scanf("%f",&m);
                   printf("DIGITE O CAPITAL: ");
                   scanf("%f",&c);
                   printf("DIGITE A TAXA: ");
                   scanf("%f",&i);
                   n = log (m/c) / log(1+(i/100)); 
                   printf("\n\nO TEMPO NECESSARIO PARA QUE UM CAPITAL DE %.2f GERE UM MONTANTE DE %.2f\nA UMA TAXA DE %.2f E %.2f MESES\n\n",c,m,i,n);
                   break;
             case 7:
                   printf("\n\tDIGITE O CAPITAL APLICADO POR MES: ");
                   scanf("%f",&c);
                   printf("\n\tDIGITE POR QUANTOS ANOS SERA FEITA A APLICACAO: ");
                   scanf("%f",&n);
                   printf("\n\tDIGITE A TAXA DE JUROS MENSAL: ");
                   scanf("%f",&i);
                   n*=12;
                   i/=100;
                   c *= (pow ((1+i),n+1)-(1+i))/i; 
                   printf("\n\nNO FINAL DE %.0f ANOS VOCE TARA A QUANTIA DE %.2f\n",n/12,c);
                   break;
              case 8:
                   system("cls");
                   break;
              case 6:
                   printf("\n\tEQUIVALENCIA DE TAXAS");
                   printf("\n\n\t1-MENOR P/ MAIOR\n\t2-MAIOR P/ MENOR");
                   printf("\n\n\tOPCAO = ");
                   scanf("%d",&op);
                   printf("\n");
              switch (op){
                   case 1:
                         printf("\tDIGITE A TAXA: ");
                         scanf("%f",&i);
                         printf("\tDIGITE O PERIODO EM MESES: ");
                         scanf("%f",&n);
                         i = (pow((1+(i/100)),n)-1)*100;
                         printf("\n\n\t%.2f",i);
                         printf("");
                         break;
                   case 2:
                        printf("\tDIGITE A TAXA: ");
                        scanf("%f",&i);
                        printf("\tDIGITE O PERIODO EM MESES: ");
                        scanf("%f",&n);
                        i = (pow((1+(i/100)),1/n)-1)*100;
                        printf("\n\n\t%.2f",i);
                        printf("");
                        break;
              }
       }
   }
                   
  system("PAUSE");	
  return 0;
}
