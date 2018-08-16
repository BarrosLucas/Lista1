/*
 * Relogio.cpp
 *
 *  Created on: 16 de ago de 2018
 *      Author: lucas
 */

#include "Relogio.h"

Relogio::Relogio() {

	setHora(0);
	setMinuto(0);
	setSegundo(0);

}

int Relogio::getHora(){
	return hora;
}

void Relogio::setHora(int hora){
	if(this->hora>23){
		hora = 0;
	}else{
		this->hora = hora;
	}
}

int Relogio::getMinuto(){
	return minuto;
}

void Relogio::setMinuto(int minuto){
	if(this->minuto>60){
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
	if(this->segundo>60){
		this->segundo = 0;
		Relogio::setMinuto(Relogio::getMinuto()+1);
	}else{
		this->segundo = segundo;
	}
}

string Relogio::avancarHorario(){
	Relogio::setSegundo(Relogio::getSegundo()+1);
	return Relogio::getHora()+":"+Relogio::getMinuto()+":"+Relogio::getSegundo();
}
