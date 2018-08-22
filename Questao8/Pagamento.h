/*
 * Pagamento.h
 *
 *  Created on: 21 de ago de 2018
 *      Author: lucas
 */

#include <string>

#ifndef PAGAMENTO_H_
#define PAGAMENTO_H_

class Pagamento {
private:
	double valorDoPagamento;
	std::string nomeDoFuncionario;
public:
	Pagamento();

	double getValorDoPagamento();
	void setValorDoPagamento(double valorDoPagamento);
	std::string getNomeDoFuncionario();
	void setNomeDoFuncionario(std::string nomeDoFuncionario);

	virtual ~Pagamento();
};

#endif /* PAGAMENTO_H_ */
