/*
 * CadastroDePessoas.cpp
 *
 *  Created on: 20 de ago de 2018
 *      Author: lucas
 */

#include <string>
#include <vector>
#include "CadastroDePessoas.h"
#include "Pessoa.h"

using namespace std;

CadastroDePessoas::CadastroDePessoas(){

}

void CadastroDePessoas::cadastrarPessoa(Pessoa pessoa){
	pessoas.push_back(&pessoa);
}


int CadastroDePessoas::deletarPessoa(Pessoa pessoa){
	int i = 0;
	for(Pessoa *pess: pessoas){

		if(((*pess).getNome().compare(pessoa.getNome()) == 0) && ((*pess).getIdade() == pessoa.getIdade()) && ((*pess).getTelefone().compare(pessoa.getTelefone()) == 0)){
			pessoas.erase(pessoas.begin()+i);
			return 1;
		}
		i++;
	}
	return 0;
}
void CadastroDePessoas::listarPessoas(){
	int cont = 0;
	string impressao = "";
	for(Pessoa *pessoa: pessoas){
		cont ++;
		impressao.append("\nPESSOA");
		impressao.append(to_string(cont));
		impressao.append("\nNome: ");
		impressao.append((*pessoa).getNome());
		impressao.append("\nIdade: ");
		impressao.append(to_string((*pessoa).getIdade()));
		impressao.append("\nTelefone: ");
		impressao.append((*pessoa).getTelefone());
		std::cout << impressao << endl;
	}
}
