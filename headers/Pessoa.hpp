#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <iostream>
using namespace std;


class Pessoa
{
    public:
        Pessoa(string nome, string telefone, string endereco);
        Pessoa(){};

        void setNome(string nome);
        void setEndereco(string endereco);
        void setTelefone(string telefone);

        string getNome();
        string getEndereco();
        string getTelefone();
         
    protected:
        string nome;
        string endereco;
        string telefone;
};

#endif
