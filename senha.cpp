#include <iostream>
#include <locale.h>

using namespace std;

struct senhasGeradas
{
	int ini;
	int fim;
	float nos[];
};

struct senhasAtendidas
{
	int ini;
	int fim;
	float nos[];
};

senhasGeradas* init()
{
	senhasGeradas *sg = new senhasGeradas;
	sg->ini = 0;
	sg->fim = 0;
	return sg;
}

senhasAtendidas* initsa()
{
	senhasAtendidas *sa = new senhasAtendidas;
	sa->ini = 0;
	sa->fim = 0;
	return sa;
}

int isEmpty(senhasGeradas *sg)
{
	return (sg->ini == sg->fim);
}

int incrementa(int i)
{
	int ret;
	ret = i + 1;
	return ret;
}

int count(senhasGeradas *sg)
{
	int qtde = 0;
	int i = sg->ini;
	while (i != sg->fim)
	{
		qtde++;
		i = incrementa(i);
	}
	return qtde;
}

void print(senhasGeradas *sg)
{
	int i = sg->ini;
	cout << "Senhas a serem atendidas" <<  endl;
	while (i != sg->fim)
	{
		cout << sg->nos[i] << endl;
		i = incrementa(i);
	}
	cout << "----------------------------------\n" << endl;
}

void printAtendidas(senhasAtendidas *sa)
{
	int i = sa->ini;
	cout << "Senhas atendidas" << endl;
	while (i < sa->fim - 1)
	{
		cout << sa->nos[i] - 1 << endl;
		i = incrementa(i);
	}
}

int gerarsenha(senhasGeradas *s, float v)
{
	s->nos[s->fim] = v;
	s->fim = incrementa(s->fim);
}

float atender(senhasGeradas *sg, senhasAtendidas *sa)
{
	float ret;
	if (isEmpty(sg))
	{
		cout << "Nenhuma senha a ser atendida" << endl;
		ret = -1;
	}
	else
	{
		cout << "Senha atendida: " << sg->nos[sg->ini] << endl;
		ret = sg->nos[sg->ini];
		sg->ini = incrementa(sg->ini);
		sa->nos[sa->fim] = sg->nos[sg->ini];
		sa->fim = incrementa(sa->fim);
	}
	return ret;
}

int main()
{
	setlocale(LC_ALL, "");
	int acao = 3;
	int senha = 1;
	int contador = 0;

	senhasGeradas *fila;
	fila = new senhasGeradas();
	fila = init();

	senhasAtendidas *atendidas;
	atendidas = new senhasAtendidas();
	atendidas = initsa();

	do
	{
		print(fila);
		printAtendidas(atendidas);
		cout << contador << endl << "----------------------------------\n" << endl;
		cout << "\nSenhas em espera: " << count(fila) << endl;
		cout << "0. Sair\n1. Gerar Senha\n2. Realizar Atendimento\nDigite de acordo com o que deseja fazer: ";
		cin >> acao;
		switch(acao)
		{
		case 0:
			cout << "Programa finalizado";
			break;
		case 1:
			cout << "\nGerou: " << (gerarsenha(fila, senha) ? "SIM" : "NÃO") << endl << "Sua senha é " << senha << endl;
			senha++;
			break;
		case 2:
			atender(fila, atendidas);
			contador++;
			break;
		default:
			cout << "Digite um número válido";
		}
	}
	while(acao != 0 && count(fila) != 0);

	if(count(fila) == 0)
	{
		cout << "Todas as senhas foram atendidas" << endl;
	}
	return 0;
}