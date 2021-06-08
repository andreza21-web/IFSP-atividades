#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

struct ficha
{
    int prontuario;
    string nome;
    double salario;
};

const int tam=1;

ficha funcionario[tam];

void cadastro()
{
    cout<<"Digitar o registro de funcionários \n";
    for (int i=0;i<tam;i++){
        cout<<"\nNome "; cin>>funcionario[i].nome;
        cout<<"\nMatricula "; cin>>funcionario[i].prontuario;
        cout<<"\nSalario "; cin>>funcionario[i].salario;
    }
 
}


void buscar(){
 string pesq;
 printf("\n\nDigite o nome a ser pesquisado: ");
 cin>>pesq;
 for(int i=0; i<tam; i++){
  if(pesq == funcionario[i].nome){
   cout<<"\n ";
   cout<<"\nNome: "<<funcionario[i].nome;
   cout<<"\nMatricula: "<<funcionario[i].prontuario;
   cout<<"\nSalario: "<<funcionario[i].salario;
  }
 }
}
   

void menu()
{
    int op=1;
    while (op!=5){
        cout<<"\nEscolha uma das opções. "<<endl;
        cout<<"\n0. Sair "<<endl;
        cout<<"\n1. Incluir "<<endl;
        cout<<"\n2. Excluir "<<endl;
        cout<<"\n3. Pesquisar "<<endl;
        cout<<"\n 4. Listar "<<endl;
        cin>>op;
        switch(op)
        {
                case 0:
                cout<<"\nFim da sensação "<<endl;
                break;
                case 1: cadastro();
             
                break;
                case 2:
                 cout<<"\n2. Excluir "<<endl;
                break;
                case 3: buscar();
                break;
                case 4:
                cout<<"\nLista de todos os funcionarios: "<<endl;
                break;
                default:
                cout<<"Valor incorreto!!"<<endl;
        }
    }
}

int main(int argc, char** argv) {

 
    menu();
    return 0;
}