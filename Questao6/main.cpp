#include <iostream>
#include "Televisao.h"

using namespace std;
int main (int argc, char *argv[]){
	Televisao tv = Televisao();
	for(int i=-120;i<120;i+=1){
		cout<<"===Object TV. Mudanças "<<i+1<<endl;

		tv.alterarCanal(i);
		tv.diminuirVolume();
		tv.aumentarVolume();
		tv.aumentarVolume();

		tv.diminuirCanal();
		tv.aumentarCanal();
		tv.aumentarCanal();


		cout<<tv.getVolumeECanal()<<endl;
		cout<<"\n"<<endl;
	}
	return 0;
}
