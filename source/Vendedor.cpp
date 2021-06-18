#include "../headers/Vendedor.hpp"
#include <iostream>
using namespace std;

void Vendedor::setValorVenda(float valorVenda)
{
    this->valorVenda = valorVenda;
}

void Vendedor::setComissao(float comissao)
{
    this->comissao = comissao;
}

float Vendedor::calculaSalario()
{
    float pct_vend = (comissao/100) * valorVenda;

    return (salarioBase - (salarioBase * (imposto/100))) + pct_vend;
}

float Vendedor::getComissao()
{
    return comissao;
}

float Vendedor::getValorVenda()
{
    return valorVenda;
}