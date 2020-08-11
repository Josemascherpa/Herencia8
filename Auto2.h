#ifndef AUTO2_H
#define AUTO2_H
#include <ctime>
#include "Auto.h"

class Auto2 : public Auto {
protected:
	bool cambio;
	int colorAuto;
	
	
public:
	Auto2(int,int,int);
	void Cambio();	
	void update();
	Auto2();
	
	
};


#endif
