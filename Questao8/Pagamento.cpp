/*
 * Pagamento.cpp
 *
 *  Created on: 21 de ago de 2018
 *      Author: lucas
 */

#include "Pagamento.h"

Pagamento::Pagamento() {
	// TODO Auto-generated constructor stub

}

Pagamento::~Pagamento() {
	// TODO Auto-generated destructor stub
}

double Pagamento::getValorDoPagamento(){
	return valorDoPagamento;
}
void Pagamento::setValorDoPagamento(double valorDoPagamento){
	this->valorDoPagamento = valorDoPagamento;
}
std::string Pagamento::getNomeDoFuncionario(){
	return nomeDoFuncionario;
}
void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
	this -> nomeDoFuncionario = nomeDoFuncionario;
}
