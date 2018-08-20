#include <iostream>
#include "Relogio.h"
#include <time.h>
#include <ctime>
using namespace std;
int main (int argc, char *argv[]){

	time_t timer;
	struct tm *fulldate;

	time(&timer);
	fulldate = localtime(&timer);

	int dia = fulldate->tm_mday;
	int mes = fulldate->tm_mon + 1;
	int ano = fulldate->tm_year + 1900;

	int hora = fulldate->tm_hour;
	int min  = fulldate->tm_min;
	int sec  = fulldate->tm_sec;

	Relogio relogio1 = Relogio(hora,min,sec,dia,mes,ano);

	int tempo = clock();

	while(1){
		while(clock() - tempo < 1000){}

		cout << relogio1.avancarHorario() << endl;
		tempo = clock();
	}

	return 0;
}
