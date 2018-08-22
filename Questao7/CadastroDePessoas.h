/*
 * CadastroDePessoas.h
 *
 *  Created on: 20 de ago de 2018
 *      Author: lucas
 */

#include <iostream>
#include <string>
#include <vector>
#include "Pessoa.h"

#ifndef CADASTRODEPESSOAS_H_
#define CADASTRODEPESSOAS_H_

class CadastroDePessoas {

public:
	CadastroDePessoas();

	static std::vector<Pessoa *> pessoas;

	static void cadastrarPessoa(Pessoa pessoa);
	static int deletarPessoa(Pessoa pessoa);
	static void listarPessoas();
};

#endif /* CADASTRODEPESSOAS_H_ */
