#include "Pessoa.hpp"
#include <iostream>
using namespace std;

#ifndef Empregado_hpp
#define Empregado_hpp
class Empregado : public Pessoa
{
    public:
        Empregado(string nome, string telefone, string endereco, int codSetor, float salarioBase, float imposto) : Pessoa(nome, telefone, endereco)
        {
            this->codSetor = codSetor;
            this->salarioBase = salarioBase;
            this-> imposto = imposto;  
        };
        
        Empregado(){};

        virtual float calcularSalario();

        void setCodSetor(int codSetor);
        void setSalarioBase(float salarioBase);
        void setImposto(float imposto);
        void imprime();

        int getCodSetor();
        float getSalarioBase();
        float getImposto();

    protected:
        int codSetor;
        float salarioBase;
        float imposto;
};

#endif