#include "../headers/Gerencia.hpp"

#include <iostream>
using namespace std;

void Gerencia::insereFornecedor(string nome, string telefone, string endereco, float valorCredito, float valorDivida)
{
    fornecedores.push_back(Fornecedor(nome, telefone, endereco, valorCredito, valorDivida));
}

void Gerencia::atualizaNome(int cargo, string nome, string novoNome)
{
    if(cargo == 1)
    {
        for(int i=0; i<fornecedores.size(); i++)
        {
            if(fornecedores[i].getNome() == nome)
            {
                fornecedores[i].setNome(novoNome);
            }
        }
    }
    else if(cargo == 2)
    {
        for(int i=0; i<administradores.size(); i++)
        {
            if(administradores[i].getNome() == nome)
            {
                administradores[i].setNome(novoNome);
            }
        }
    }
    else if(cargo == 3)
    {
        for(int i=0; i<vendedores.size(); i++)
        {
            if(vendedores[i].getNome() == nome)
            {
                vendedores[i].setNome(novoNome);
            }
        }
    }
    else if(cargo == 4)
    {
        for(int i=0; i<operarios.size(); i++)
        {
            if(operarios[i].getNome() == nome)
            {
                operarios[i].setNome(novoNome);
            }
        }
    }
    else
    {
        cout << "Cargo não encontrado!" << endl;
    }
}

void Gerencia::atualizaTelefone(int cargo, string nome, string telefone)
{
    if(cargo == 1)
    {
        for(int i=0; i<fornecedores.size(); i++)
        {
            if(fornecedores[i].getNome() == nome)
            {
                fornecedores[i].setTelefone(telefone);
            }
        }
    }
    else if(cargo == 2)
    {
        for(int i=0; i<administradores.size(); i++)
        {
            if(administradores[i].getNome() == nome)
            {
                administradores[i].setTelefone(telefone);
            }
        }
    }
    else if(cargo == 3)
    {
        for(int i=0; i<vendedores.size(); i++)
        {
            if(vendedores[i].getNome() == nome)
            {
                vendedores[i].setTelefone(telefone);
            }
        }
    }
    else if(cargo == 4)
    {
        for(int i=0; i<operarios.size(); i++)
        {
            if(operarios[i].getNome() == nome)
            {
                operarios[i].setTelefone(telefone);
            }
        }
    }
    else
    {
        cout << "Cargo não encontrado!" << endl;
    }
}

void Gerencia::atualizaEndereco(int cargo, string nome, string endereco)
{
    if(cargo == 1)
    {
        for(int i=0; i<fornecedores.size(); i++)
        {
            if(fornecedores[i].getNome() == nome)
            {
                fornecedores[i].setEndereco(endereco);
            }
        }
    }
    else if(cargo == 2)
    {
        for(int i=0; i<administradores.size(); i++)
        {
            if(administradores[i].getNome() == nome)
            {
                administradores[i].setEndereco(endereco);
            }
        }
    }
    else if(cargo == 3)
    {
        for(int i=0; i<vendedores.size(); i++)
        {
            if(vendedores[i].getNome() == nome)
            {
                vendedores[i].setEndereco(endereco);
            }
        }
    }
    else if(cargo == 4)
    {
        for(int i=0; i<operarios.size(); i++)
        {
            if(operarios[i].getNome() == nome)
            {
                operarios[i].setEndereco(endereco);
            }
        }
    }
    else
    {
        cout << "Cargo não encontrado!" << endl;
    }
}

void Gerencia::insereAdministrador(string nome, string telefone, string  endereco, int codSetor, float salarioBase, float imposto, float ajudaDeCusto)
{
    administradores.push_back(Administrador(nome, telefone, endereco, codSetor, salarioBase, imposto, ajudaDeCusto));
}

void Gerencia::insereVendedor(string nome, string telefone, string endereco, int codSetor, float salarioBase, float imposto, float valorVenda, float comissao)
{
    vendedores.push_back(Vendedor(nome, telefone, endereco, codSetor, salarioBase, imposto, valorVenda, comissao));
}

void Gerencia::insereOperario(string nome, string telefone, string endereco, int codSetor, float salarioBase, float imposto, float valorProducao, float comissao)
{
    operarios.push_back(Operario(nome, telefone, endereco, codSetor, salarioBase, imposto, valorProducao, comissao));
}

void Gerencia::relatorio()
{

    if(fornecedores.size() != 0)
    {
        cout << "========= FORNECEDORES =========" <<  endl;
        for(int i=0; i<fornecedores.size(); i++)
        {
            fornecedores[i].imprime();
            cout << endl;
        }
    }

    if(administradores.size() != 0)
    {
        cout << "========= ADMINISTRADORES =========" <<  endl;
        for(int i=0; i<administradores.size(); i++)
        {
            administradores[i].imprime();
            cout << endl;
        }
    }

    if(vendedores.size() != 0)
    {
        cout << "========= VENDEDORES =========" <<  endl;
        for(int i=0; i<vendedores.size(); i++)
        {
            vendedores[i].imprime();
            cout << endl;
        }
    }

    if(operarios.size() != 0)
    {
        cout << "========= OPERARIOS =========" <<  endl;
        for(int i=0; i<operarios.size(); i++)
        {
            operarios[i].imprime();
            cout << endl;
        }
    }
}