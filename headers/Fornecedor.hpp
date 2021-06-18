#include "Pessoa.hpp"

#ifndef Fornecedor_hpp
#define Fornecedor_hpp

class Fornecedor : public Pessoa
{
    public:
        Fornecedor(string nome, string telefone, string endereco, float valorCredito, float valorDivida) : Pessoa(nome, telefone, endereco)
        {
            this->valorCredito = valorCredito;
            this->valorDivida = valorDivida;
        };
        Fornecedor(){};
        float obterSaldo();
        void setValorDivida(float valorDivida);
        void setValorCredito(float valorCredito);
    private:
        float valorCredito;
        float valorDivida;
};




#endif