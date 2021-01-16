#pragma once
#include "Figura.h"
class Circulo : public Figura {
protected:
	int radio;
public:
	Circulo(int x, int y, int dx, int dy, int masa, int radio);
	~Circulo();
	Rectangle get_Rec();
	void set_radio(int radio);
	int get_radio();
};
Circulo::Circulo(int x, int y, int dx, int dy, int masa, int radio) :Figura(x, y, dx, dy, masa) {
	this->radio = radio;
	
}
Circulo::~Circulo() {

}
Rectangle Circulo::get_Rec() { return Rectangle(x, y, radio, radio); }
void Circulo::set_radio(int radio) { this->radio = radio; }
int Circulo::get_radio()		   { return radio;		  }