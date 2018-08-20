/*
 * Televisao.h
 *
 *  Created on: 19 de ago de 2018
 *      Author: lucas
 */

#include <string>

#ifndef TELEVISAO_H_
#define TELEVISAO_H_

class Televisao {
private:
	int volume;
	int canal;
public:

	void setVolume(int volume);
	int getVolume();
	void setCanal(int canal);
	int getCanal();
	int aumentarVolume();
	int diminuirVolume();
	int aumentarCanal();
	int diminuirCanal();
	int alterarCanal(int canal);
	std::string getVolumeECanal();

	Televisao();
	virtual ~Televisao();
};

#endif /* TELEVISAO_H_ */
