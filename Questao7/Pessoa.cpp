/*
 * Pessoa.cpp
 *
 *  Created on: 20 de ago de 2018
 *      Author: lucas
 */

#include "Pessoa.h"

Pessoa::Pessoa(std::string nome) {
	setNome(nome);
	setTelefone("");
	setIdade(0);
}
Pessoa::Pessoa(std::string nome, int idade, std::string telefone){
	setNome(nome);
	setIdade(idade);
	setTelefone(telefone);
}

int Pessoa::getIdade(){
	return idade;
}
void Pessoa::setIdade(int idade){
	this->idade = idade;
}
std::string Pessoa::getNome(){
	return nome;
}
void Pessoa::setNome(std::string nome){
	this->nome = nome;
}
std::string Pessoa::getTelefone(){
	return telefone;
}
void Pessoa::setTelefone(std::string telefone){
	this->telefone = telefone;
}

Pessoa::~Pessoa() {
	// TODO Auto-generated destructor stub

}

