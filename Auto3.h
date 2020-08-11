#ifndef AUTO3_H
#define AUTO3_H
#include <ctime>
#include "Auto.h"

class Auto3 : public Auto {
protected:
	bool cambio;
	int colorAuto;
	
	
public:
	Auto3(int,int,int);
	void Colorear();
	void update();
	Auto3();
	
	
};


#endif
