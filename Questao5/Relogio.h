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
	int dia;
	int mes;
	int ano;

public:
	Relogio();
	Relogio(int hora, int minuto, int segundo,int dia, int mes, int ano);
	virtual ~Relogio();

	int getHora();

	void setHora(int hora);

	int getMinuto();

	void setMinuto(int minuto);

	int getSegundo();

	void setSegundo(int segundo);

	int getDia();

	void setDia(int dia);

	int getMes();

	void setMes(int mes);

	int getAno();

	void setAno(int ano);

	string avancarHorario();
};

#endif /* RELOGIO_H_ */
