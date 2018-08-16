/*
 * Relogio.h
 *
 *  Created on: 16 de ago de 2018
 *      Author: lucas
 */


#include<string>
using std::string;
using std::getline;

#ifndef RELOGIO_H_
#define RELOGIO_H_

class Relogio {
private:
	int hora;
	int minuto;
	int segundo;

public:
	Relogio();
	virtual ~Relogio();

	int getHora();

	void setHora(int hora);

	int getMinuto();

	void setMinuto(int minuto);

	int getSegundo();

	void setSegundo(int segundo);

	string avancarHorario(){}
};

#endif /* RELOGIO_H_ */
