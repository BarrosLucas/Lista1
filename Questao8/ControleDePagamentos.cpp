/*
 * ControleDePagamentos.cpp
 *
 *  Created on: 21 de ago de 2018
 *      Author: lucas
 */
#include <iostream>
#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos() {
	// TODO Auto-generated constructor stub

}

ControleDePagamentos::~ControleDePagamentos() {
	// TODO Auto-generated destructor stub
}

void ControleDePagamentos::setPagamentos(Pagamento pagamento, int i){
	if(i < 0 || i > 1000){
		std::cout << "Posição inválida";
	}else{
		pagamentos[i] = pagamento;
	}
}
double ControleDePagamentos::calculaTotalDePagamentos(){
	double retorno = 0;
	for(Pagamento pagamento: pagamentos){
		retorno += pagamento.getValorDoPagamento();
	}
	return retorno;
}
bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nomeFuncionario){
	for(Pagamento pagamento: pagamentos){
		if(nomeFuncionario.compare(pagamento.getNomeDoFuncionario())){
			return true;
		}
	}
	return false;
}
