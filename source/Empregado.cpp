#include "../headers/Empregado.hpp"

#include <iostream>
using namespace std;

void Empregado::setSalarioBase(float salarioBase)
{
    this->salarioBase = salarioBase;
}

void Empregado::setImposto(float imposto)
{
    this->imposto = imposto;
}

void Empregado::setCodSetor(int codSetor)
{
    this->codSetor = codSetor;
}

float Empregado::calcularSalario()
{
    return salarioBase - (salarioBase * (imposto/100));
}

float Empregado::getImposto()
{
    return imposto;
}

float Empregado::getSalarioBase()
{
    return salarioBase;
}

int Empregado::getCodSetor()
{
    return codSetor;
}

