#include "../headers/Pessoa.hpp"

#include <iostream>
using namespace std;

Pessoa::Pessoa(string nome, string telefone, string endereco)
{
    this->nome = nome;
    this->telefone = telefone;
    this->endereco = endereco;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setEndereco(string endereco)
{
    this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}

void Pessoa::imprime()
{
    cout << "Nome: " << nome << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Endereco: " << endereco << endl;
}

string Pessoa::getNome()
{
    return this->nome;
}

string Pessoa::getEndereco()
{
    return this->endereco;
}

string Pessoa::getTelefone()
{
    return this->telefone;
}

