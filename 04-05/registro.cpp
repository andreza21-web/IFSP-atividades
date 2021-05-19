#include <iostream>
using namespace std;

class Data
{
	private:
		int dia;
		int mes;
		int ano;
		
	public:
		Data(int dia, int mes, int ano)
		{
			this->dia = dia;
			this->mes = mes;
			this->ano = ano;
		}
		
		Data()
		{
			this->dia = 0;
			this->mes = 0;
			this->ano = 0;
		}
		
		void setDia(int dia)
		{
			this->dia = dia;
		}
		
		void setMes(int mes)
		{
			this->mes = mes;
		}

		void setAno(int ano)
		{
			this->ano = ano;
		}
		
		int getDia()
		{
			return this->dia;
		}
		
		int getMes()
		{
			return this->mes;
		}

		int getAno()
		{
			return this->ano;
		}
		
		string getData()
        {
 	        return to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->ano);
        }
        int getidade()
        {
            int dia = 04, mes = 05, ano = 2021, idade = ano - this->ano;
            {
            idade++;
            }
                if (this-> mes == mes && this-> dia > dia)
            {
                idade++;
            }
            return idade;
        }
};
class contato
{
private:
    /* contato */
    string email;
    string nome;
    string telefone;
    string dtnasc;
    
public:
    contato( string email,string nome, string telefone,string dtnasc)
    {
        this-> email = email;
        this-> nome = nome;
        this-> telefone = telefone;
        this-> dtnasc = dtnasc;
    }
    contato()
    {
        this->email = "";
        this->nome = "";
        this->telefone = "";
        this->dtnasc = "";

    }
    void setEmail( string email)
    {
        this->email = email;
    }
    void setNome( string nome)
    {
        this-> nome = nome;
    }
    void setTelefone( string telefone)
    {
        this-> telefone = telefone;
    }
    void setDtnasc( string dtnasc)
    {
        this-> dtnasc = dtnasc;
    }
    string getEmail()
    {
        return this->telefone;
    }
    string getNome()
    {
        return this-> nome;
    }
    string getTelefone()
    {
        return this-> telefone;
    }
	string getNasc()
	{
		return this->dtnasc;
	}

    string getContato()
    {
        return  "Email: "+this->email + "Nome: " + this->nome + "Telefone: " + this->telefone;
    }

};

int main(int argc, char const *argv[])
{
    string  nome,email, telefone;
    int dia, mes, ano;

    contato * Contat[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"Contato " <<endl;
        cout<< " Digite o seu nome" <<endl;
        cin>>nome;

        cout<<"Digite o seu email"<<endl;
        cin>>email;

        cout<<"Digite o seu telefone"<<endl;
        cin>>telefone;

        cout<< "Informe o dia do seu aniversario"<<endl;
        cin>>dia;

        cout<<"Informe o mês do seu aniversário"<<endl;
        cin>>mes;

        cout<<" Informe o ano do seu nascimento"<<endl;
        cin>>ano;

        
    }
	

    return 0;
}
