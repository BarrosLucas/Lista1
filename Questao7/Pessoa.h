/*
 * Pessoa.h
 *
 *  Created on: 20 de ago de 2018
 *      Author: lucas
 */

#include <string>

#ifndef PESSOA_H_
#define PESSOA_H_

class Pessoa {

private:
	std::string nome;
	int idade;
	std::string telefone;


public:
	Pessoa(std::string nome);
	Pessoa(std::string nome,int idade,std::string telefone);

	std::string getNome();
	void setNome(std::string nome);
	int getIdade();
	void setIdade(int idade);
	std::string getTelefone();
	void setTelefone(std::string telefone);

	virtual ~Pessoa();
};

#endif /* PESSOA_H_ */
