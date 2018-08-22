/*
 * main.cpp
 *
 *  Created on: 20 de ago de 2018
 *      Author: lucas
 */
#include <iostream>
#include <string>
#include "Pessoa.h"
#include "CadastroDePessoas.h"
#include <vector>

using namespace std;

void mostrarMenu(int *escolha);
void cadastrar();
void deletar();
void listarPessoas();

CadastroDePessoas cadastro;

int main (int argc, char *argv[]){
	int escolha;
	cadastro = CadastroDePessoas();
	do{
		mostrarMenu(&escolha);
		if(escolha == 1){
			cadastrar();
		}else if(escolha == 2){
			deletar();
		}else if(escolha == 3){
			listarPessoas();
		}
	}while(escolha == 1 || escolha == 2 || escolha == 3);

	return 0;
}

void listarPessoas(){



}

void deletar(){
	string nome;
	string telefone;
	int idade;

	cout << "DADOS DA PESSOA QUE SERÁ EXCLUÍDA" << endl;

	cout << "Nome: ";
	getline(cin,nome);

	cout << "Idade: ";
	cin >> idade;

	cout << "Telefone: ";
	getline(cin,telefone);

	Pessoa pessoa = Pessoa(nome,idade,telefone);

	if(cadastro.deletarPessoa(pessoa)){
		cout <<"Deletado Com Sucesso"<<endl;
	}else{
		cout <<"Usuário Não Encontrado"<<endl;
	}

	pessoa.~Pessoa();
}

void cadastrar(){
	int novaEscolha;
	string nome;
	do{
		cout << "CADASTRAR\n1 - Apenas nome\n2 - Com nome, idade e telefone\nEscolha: ";
		cin >> novaEscolha;
	}while(novaEscolha != 1 && novaEscolha != 2);
	if(novaEscolha == 1){
		cout<<"Nome: ";
		getline(cin,nome);
		Pessoa pessoa = Pessoa(nome);
		cadastro.cadastrarPessoa(pessoa);
		pessoa.~Pessoa();
	}else{
		int idade;
		string telefone;

		cout<<"Nome: ";
		getline(cin,nome);
		cout<<"Idade: ";
		cin >> idade;
		cout<<"Telefone: ";
		getline(cin,telefone);

		Pessoa pessoa = Pessoa(nome,idade,telefone);
		cadastro.cadastrarPessoa(pessoa);
		pessoa.~Pessoa();
	}

}

void mostrarMenu(int *escolha){
	cout << "MENU\n1 - Cadastrar\n2 - Deletar\n3 - Listar\nOutro digito para sair\nEscolha: ";
	cin >> *escolha;
}
