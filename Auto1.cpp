#include "Auto1.h"
#include <cstdlib>
#include <conio2.h>

#include <iostream>
#include <cstdio>
#include "Auto.h"
using namespace std;

/*
// CONSTRUCTOR
*/

Auto1::Auto1(int vel, int x0, int y0):Auto(vel,x0,y0){
	
}

Auto1::Auto1(){
	
}
/*
METODO DIBUJAR
*/



/*
METODO BORRAR
*/



/// El metodo update lo tiene cada objeto pero es 
//// distinto en cada caso, por lo que se debe implementar 
/// en cada clase
bool Auto1::update(){
	
	if (_kbhit()){
		int tecla = getch();
		bool moves = false;
		
		switch(tecla){
		case (72): { // arriba
			if (y - alto > minLimitY ){borrar(); y = y - pasoY; moves = true;} break;
		}
		case (80):{ // abajo
			if (y < maxLimitY){borrar(); y = y + pasoY; moves = true;} break;
		}
		case (77):{ // derecha
			if (x + ancho < maxLimitX){borrar(); x = x + pasoX; moves = true;} break;
		}
		case (75):{ // izquierda
			if (x - ancho > minLimitX){borrar(); x = x - pasoX; moves = true;} break;
		}
		}
		
		if(moves) {
			dibujar();
		}
	}	
	
}


