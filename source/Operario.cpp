#include "../headers/Operario.hpp"

void Operario::setValorProducao(float valorProducao)
{
    this->valorProducao = valorProducao;
}

void Operario::setComissao(float comissao)
{
    this->comissao = comissao;
}

float Operario::calcularSalario()
{
    float pct_prod = (comissao/100) * valorProducao;

    return (salarioBase - (salarioBase * (imposto/100))) + pct_prod;
}

float Operario::getComissao()
{
    return comissao;
}

float Operario::getValorProducao()
{
    return valorProducao;
}