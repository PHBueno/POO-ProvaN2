#include "Empregado.hpp"
#include <iostream>
using namespace std;

#ifndef Vendedor_hpp
#define Vendedor_hpp

class Vendedor : public Empregado
{
    public:
        Vendedor(string nome, string telefone, string endereco, int codSetor, float salarioBase, float imposto, float valorVenda, float comissao) : Empregado(nome, telefone, endereco, codSetor, salarioBase, imposto)
        {
            this->valorVenda = valorVenda;
            this->comissao = comissao;
        };

        float calculaSalario();
        float getValorVenda();
        float getComissao();
        
        void setValorVenda(float valorVenda);
        void setComissao(float comissao);


    private:
        float valorVenda;
        float comissao;
};


#endif
