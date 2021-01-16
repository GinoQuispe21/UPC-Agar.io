#pragma once
#include "Circulo.h"
class Comida :public Circulo {
public:
	Comida(int x, int y, int dx, int dy, int masa, int radio);
	~Comida();
	void Mostrar(Graphics^g, Bitmap^bmp);
};
Comida::Comida(int x, int y, int dx, int dy, int masa, int radio) :Circulo(x, y, dx, dy, masa, radio) {

}
Comida::~Comida() {

}
void Comida::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}