#include "Empregado.hpp"
#include <iostream>
using namespace std;

#ifndef Operario_hpp
#define Operario_hpp

class Operario : public Empregado
{

    public:
        Operario (string nome, string telefone, string endereco, int codSetor, float salarioBase, float imposto, float valorProducao, float comissao) : Empregado(nome, telefone, endereco, codSetor, salarioBase, imposto)
        {
            this->valorProducao = valorProducao;
            this->comissao = comissao;
        };
        void setValorProducao(float valorProducao);
        void setComissao(float comissao);


        float calcularSalario();
        float getValorProducao();
        float getComissao();
        
    private:
        float valorProducao;
        float comissao;
};

#endif