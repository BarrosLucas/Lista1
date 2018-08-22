/*
 * main.cpp
 *
 *  Created on: 21 de ago de 2018
 *      Author: lucas
 */
#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>
#include <string>

int main (int argc, char *argv[]){
	Pagamento pagamento1 = Pagamento();
	pagamento1.setValorDoPagamento(100);
	pagamento1.setNomeDoFuncionario("Func1");
	Pagamento pagamento2 = Pagamento();
	pagamento2.setValorDoPagamento(150);
	pagamento2.setNomeDoFuncionario("Func2");

	ControleDePagamentos::setPagamentos(pagamento1,0);
	ControleDePagamentos::setPagamentos(pagamento2,1);

	return 0;
}
