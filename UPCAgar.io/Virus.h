#pragma once
#include "Circulo.h"
class Virus : public Circulo {
public:
	Virus(int x, int y, int dx, int dy, int masa, int radio);
	~Virus();
	void Mover();
	void Mostrar(Graphics^g, Bitmap^bmp);
};
Virus::Virus(int x, int y, int dx, int dy, int masa, int radio) :Circulo(x, y, dx, dy, masa, radio) {
	
}
Virus::~Virus() {

}
void Virus::Mover() {
	x = x + dx;
	y += dy;
}
void Virus::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}