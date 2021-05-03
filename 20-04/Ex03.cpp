#include <iostream>
#include <fstream>
#include <locale.h>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ifstream arq;
    arq.open("lista.txt");
	
	if(arq.is_open())
	{
		string linha;
       
		while( getline(arq, linha) )
		{
			string sobrenome;
            sobrenome = linha;

            int posicao1;
            int posicao2;

            posicao1  = linha.find(" ");
            posicao2 = linha.rfind(" ");

            sobrenome.erase(0,posicao2);
            sobrenome.erase(0,1);

            linha.erase(posicao2 , linha.size());
            sobrenome.append( "," + linha);

            cout << sobrenome << endl;

            
		}
		arq.close();
	}
	else
	{
		cout << "Não foi possível abrir o arquivo";
	}
	
	return 0;
}