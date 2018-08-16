#include <iostream>
#include "Relogio.h"
using namespace std;
int main (int argc, char *argv[]){
	Relogio relogio1 = new Relogio();
	Relogio relogio2 = new Relogio();
	int i;

	for(i=0;i<50000;i++){
		relogio1.avancarHorario();
	}
	relogio1.~Relogio();

	for(i=0;i<25000;i++){
		relogio2.avancarHorario();
	}
	relogio2.~Relogio();
}
