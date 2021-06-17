#include "Pessoa.hpp"

#ifndef Fornecedor_hpp
#define Fornecedor_hpp

class Fornecedor : public Pessoa
{
    public:
        Fornecedor(string nome, string telefone, string endereco) : Pessoa(nome, telefone, endereco){};
        Fornecedor(){};
        float obterSaldo();
        void setValorDivida(float valorDivida);
        void setValorCredito(float valorCredito);
    private:
        float valorCredito;
        float valorDivida;
};




#endif