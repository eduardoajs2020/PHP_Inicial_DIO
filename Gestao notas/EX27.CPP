#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define NALUNOS 22

#define NOME_FICH_NOTAS "c:\\aulasc\\t18\\notas.t18"
#define NOME_FICH_NUMS "c:\\aulasc\\t18\\nums.t18"
#define NOME_FICH_NOMES "c:\\aulasc\\t18\\nomes.t18"

int notas[NALUNOS];
int nums[NALUNOS];
int nomes[NALUNOS];

int menu()
{
int op;

	printf("Menu\n\n");
	printf("1 - Inserir dados pessoais dos alunos\n");
	printf("2 - Inserir notas\n");
	printf("3 - Ver notas\n");
	printf("4 - Media\n");
	printf("5 - Melhor nota\n");
	printf("6 - Pior nota\n");
	printf("7 - N£mero de positivas\n");
	printf("8 - N£mero de negativas\n");
	printf("9 - Gravar notas em ficheiro\n");
	printf("10 - Ler notas de ficheiro\n");
	printf("11 - Altera nota de um aluno\n");
	printf("12 - Sair\n\n");

	printf("Opcao: ");
	scanf("%d",&op);

	return op;
}

void InsValores()
{
int i;

	clrscr();
	printf("Insira as notas dos alunos.\n\n");
	for(i=0;i<NALUNOS;i++)
	{
		printf("N§%d: ",i+1);
		scanf("%d",&notas[i]);
	}
}

void VerNotas()
{
int i;

	clrscr();
	printf("Notas dos alunos.\n\n");
	for(i=0;i<NALUNOS;i++)
		printf("N§%d: %d\n",i+1,notas[i]);
	getch();
}

float Media()
{
float s=0;
int i;

	for(i=0;i<NALUNOS;i++)
		s = s + notas[i];
	return (s / NALUNOS);

}

void NotaMaxima()
{
int i, max = notas[0];


	for(i=1;i<NALUNOS;i++)
	{
		if (notas[i] > max)
			max = notas[i];
	}

	printf("Alunos com a melhor nota. Nota de %d valores.\n\n",max);
	for(i=0;i<NALUNOS;i++)
	{
		if (notas[i] == max)
			printf("N§%d\n",i+1);
	}

	getch();
}

int NotaMinima()
{
int i, min = notas[0];


	for(i=1;i<NALUNOS;i++)
	{
		if (notas[i] < min)
			min = notas[i];
	}

	printf("Alunos com a pior nota. Nota de %d valores.\n\n",min);
	for(i=0;i<NALUNOS;i++)
	{
		if (notas[i] == min)
			printf("N§%d\n",i+1);
	}
	getch();
}

int NumPos()
{
int i, np = 0;

	for(i=0;i<NALUNOS;i++)
	{
		if (notas[i] >= 10) np++;
	}
	return np;
}

int NumNeg()
{
int i, nn = 0;

	for(i=0;i<NALUNOS;i++)
	{
		if (notas[i] < 10) nn++;
	}
	return nn;
}

int Gravar()
{
FILE *fp;
int i;

	fp = fopen(NOME_FICH_NOTAS,"w");
	for(i=0;i<NALUNOS;i++)
		fprintf(fp,"%d\n",notas[i]);
	fclose(fp);

	return 0;
}

int Ler()
{
FILE *fp;
int i;

	fp = fopen(NOME_FICH_NOTAS,"r");
	for(i=0;i<NALUNOS;i++)
		fscanf(fp,"%d\n",&notas[i]);
	fclose(fp);

	return 0;
}

void AlteraNota()
{
int num, nota;

	printf("N§ do aluno: ");
	scanf("%d", &num);
	printf("Nota anterior: %d    Nota: ",notas[num-1]);
	scanf("%d", &nota);

	notas[num-1] = nota;


}

void DadosPessoais()
{
int num;

	clrscr();
	printf("N§: ");scanf("%d",&num);

	//ver se o n§ j  existe!


	getch();

}

void PF()
{
	clrscr();
	printf("Pedimos desculpa mas esta funcionalidade ainda nÆo est  disponivel!");
	getch();
}

main()
{
int opc, nota, num;

	Ler();

	for(;;)
	{
		clrscr();

		opc = menu();
		switch(opc)
		{
			case 1: DadosPessoais();
					break;
			case 2: InsValores();
					break;
			case 3: VerNotas();
					break;
			case 4: clrscr();
					printf("Media das notas: %f",Media());
					getch();
					break;
			case 5: clrscr();
					NotaMaxima();
					break;
			case 6: clrscr();
					NotaMinima();
					break;
			case 7: clrscr();
					printf("N§ de positivas: %d",NumPos());
					getch();
					break;
			case 8: clrscr();
					printf("N§ de negativas: %d",NumNeg());
					getch();
					break;
			case 9: clrscr();
					Gravar();
					printf("Grava‡Æo de notas com sucesso! Qualquer tecla para continuar...");
					getch();
					break;
			case 10: clrscr();
					Ler();
					printf("Leitura de notas com sucesso! Qualquer tecla para continuar...");
					getch();
					break;
			case 11: clrscr();
					AlteraNota();
					break;
			case 12: return 0;
		}
	}

	return 0;
}

