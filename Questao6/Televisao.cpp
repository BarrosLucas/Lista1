/*
 * Televisao.cpp
 *
 *  Created on: 19 de ago de 2018
 *      Author: lucas
 */
#include <iostream>
#include <sstream>
#include <string>

using std::string;
using std::getline;

#include "Televisao.h"

void Televisao::setVolume(int volume){
	if(volume < 0){
		this->volume = 0;
	}else if(volume > 100){
		this->volume = 100;
	}else{
		this->volume = volume;
	}
}
int Televisao::getVolume(){
	return volume;
}
void Televisao::setCanal(int canal){
	if(canal < 0){
		this->canal = 0;
	}else if(canal > 100){
		this->canal = 100;
	}else{
		this->canal = canal;
	}
}
int Televisao::getCanal(){
	return canal;
}
int Televisao::aumentarVolume(){
	setVolume(getVolume()+1);
	return getVolume();
}
int Televisao::diminuirVolume(){
	setVolume(getVolume()-1);
	return getVolume();
}
int Televisao::aumentarCanal(){
	setCanal(getCanal()+1);
	return getCanal();
}
int Televisao::diminuirCanal(){
	setCanal(getCanal()-1);
	return getCanal();
}
int Televisao::alterarCanal(int canal){
	setCanal(canal);
	return getCanal();
}
std::string Televisao::getVolumeECanal(){
	std::string retorno = "Canal: ";
	retorno.append(std::to_string(getCanal()));
	retorno.append("\nVolume: ");
	retorno.append(std::to_string(getVolume()));
	return retorno;
}

Televisao::Televisao() {
	setVolume(0);
	setCanal(0);
	// TODO Auto-generated constructor stub

}

Televisao::~Televisao() {
	// TODO Auto-generated destructor stub
}

