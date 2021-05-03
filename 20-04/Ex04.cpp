#include <iostream>
#include <fstream>
#include <locale.h>
#include<ctype.h>
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

            string sobreNome = "";

            int posicao1;

           posicao1 = sobrenome.rfind("");

           sobrenome.erase(0,posicao1);

           linha.erase(posicao1, linha.size() - 1);

           linha.insert(0, sobrenome + ",");
           
           linha.erase(0,1);
           
           string primeiro_nome;
           primeiro_nome = linha;

           int i; 
           int posicao2;
           posicao2 = primeiro_nome.rfind(" ");

           for(char c: primeiro_nome){
               for(i = primeiro_nome.size(); i> posicao2; i--){

                   posicao2 = primeiro_nome.rfind(" ");
                   primeiro_nome.erase(posicao2, primeiro_nome.size());
                   primeiro_nome += linha[posicao2 +1];
                   primeiro_nome.append(".");
               }
           }

             cout << primeiro_nome << endl;



            
		}
		arq.close();
	}
	else
	{
		cout << "Não foi possível abrir o arquivo";
	}
	
	return 0;
}