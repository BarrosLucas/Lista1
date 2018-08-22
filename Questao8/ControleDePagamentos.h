/*
 * ControleDePagamentos.h
 *
 *  Created on: 21 de ago de 2018
 *      Author: lucas
 */
#include "Pagamento.h"

#ifndef CONTROLEDEPAGAMENTOS_H_
#define CONTROLEDEPAGAMENTOS_H_

class ControleDePagamentos {

private:
	static Pagamento pagamentos[1000];

public:
	ControleDePagamentos();

	static void setPagamentos(Pagamento pagamento, int i);
	static double calculaTotalDePagamentos();
	static bool existePagamentoParaFuncionario(std::string nomeFuncionario);

	virtual ~ControleDePagamentos();
};

#endif /* CONTROLEDEPAGAMENTOS_H_ */
