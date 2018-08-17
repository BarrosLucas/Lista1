/*
 * Relogio.cpp
 *
 *  Created on: 16 de ago de 2018
 *      Author: lucas
 */

#include <sstream>
#include <string>
using std::string;
using std::getline;

#include "Relogio.h"

Relogio::Relogio() {

	setHora(0);
	setMinuto(0);
	setSegundo(0);

}

Relogio::Relogio(int hora, int minuto, int segundo, int dia, int mes, int ano) {
	this->hora=hora;
	this->minuto=minuto;
	this->segundo=segundo;
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

int Relogio::getHora(){
	return hora;
}

void Relogio::setHora(int hora){
	if(hora>23){
		this->hora = 0;
		Relogio::setDia(Relogio::getDia()+1);
	}else{
		this->hora = hora;
	}
}

int Relogio::getMinuto(){
	return minuto;
}

void Relogio::setMinuto(int minuto){
	if(minuto>59){
		this->minuto = 0;
		Relogio::setHora(Relogio::getHora()+1);
	}else{
		this->minuto = minuto;
	}
}

int Relogio::getSegundo(){
	return segundo;
}

void Relogio::setSegundo(int segundo){
	if(segundo>59){
		this->segundo = 0;
		Relogio::setMinuto(Relogio::getMinuto()+1);
	}else{
		this->segundo = segundo;
	}
}

int Relogio::getDia(){
	return dia;
}

void Relogio::setDia(int dia){
	switch(Relogio::getMes()){
	case 1:
		if(dia > 31){
			this->dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this->dia = dia;
		}
		break;
	case 2:
		if(Relogio::getAno()%4 == 0 && Relogio::getAno()%100 != 0){
			if(dia > 29){
				this -> dia = 1;
				Relogio::setMes(Relogio::getMes()+1);
			}else{
				this -> dia = dia;
			}
		}else if(Relogio::getAno()%400 == 0){
			if(dia > 29){
				this -> dia = 1;
				Relogio::setMes(Relogio::getMes()+1);
			}else{
				this -> dia = dia;
			}
		}else{
			if(dia > 28){
				this -> dia = 1;
				Relogio::setMes(Relogio::getMes()+1);
			}else{
				this -> dia = dia;
			}
		}
		break;
	case 3:
		if(dia > 31){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 4:
		if(dia > 30){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 5:
		if(dia > 31){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 6:
		if(dia > 30){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;

	case 7:
		if(dia > 31){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 8:
		if(dia > 31){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 9:
		if(dia > 30){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 10:
		if(dia > 31){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 11:
		if(dia > 30){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;
	case 12:
		if(dia > 31){
			this-> dia = 1;
			Relogio::setMes(Relogio::getMes()+1);
		}else{
			this-> dia = dia;
		}
		break;

	}

}

int Relogio::getMes(){
	return mes;
}

void Relogio::setMes(int mes){
	if(mes > 12){
		this->mes = 1;
		Relogio::setAno(Relogio::getAno()+1);
	}else{
		this->mes = mes;
	}
}

int Relogio::getAno(){
	return ano;
}

void Relogio::setAno(int ano){
	this->ano = ano;
}

Relogio::~Relogio() {
}



string Relogio::avancarHorario(){
	Relogio::setSegundo(Relogio::getSegundo()+1);
	string retorno;
	retorno.append("Horário atual: ");
	if(Relogio::getHora()<10){
		retorno.append("0");
	}
	retorno.append(std::to_string(Relogio::getHora()));
	retorno.append(":");
	if(Relogio::getMinuto()<10){
			retorno.append("0");
	}
	retorno.append(std::to_string(Relogio::getMinuto()));
	retorno.append(":");
	if(Relogio::getSegundo()<10){
			retorno.append("0");
	}
	retorno.append(std::to_string(Relogio::getSegundo()));
	retorno.append("\nData: ");
	if(Relogio::getDia()<10){
			retorno.append("0");
	}
	retorno.append(std::to_string(Relogio::getDia()));
	retorno.append("/");
	if(Relogio::getMes()<10){
			retorno.append("0");
	}
	retorno.append(std::to_string(Relogio::getMes()));
	retorno.append("/");
	if(Relogio::getAno()<10){
			retorno.append("0");
	}
	retorno.append(std::to_string(Relogio::getAno()));
	return retorno;
}
