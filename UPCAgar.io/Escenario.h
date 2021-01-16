#pragma once
#include "Figura.h"
class MenuPrincipal {
public:
	MenuPrincipal() {}
	~MenuPrincipal() {}
	void Mostrar(Graphics^g, Bitmap^bmp) {
		Rectangle tamanio = Rectangle(0, 0, 1875, 984);
		Rectangle porcion = Rectangle(0, 0, g->VisibleClipBounds.Width, g->VisibleClipBounds.Height);
		g->DrawImage(bmp, porcion, tamanio, GraphicsUnit::Pixel);
	}
};

class Escenario {
public:
	Escenario();
	~Escenario();
	void Mostrar(Graphics^g, Bitmap^bmp, int nivel);
};
Escenario::Escenario() {

}
Escenario::~Escenario() {

}
void Escenario::Mostrar(Graphics^g, Bitmap^bmp, int nivel) {
	if (nivel == 1) {
		Rectangle tamanio = Rectangle(0, 0, 1920, 1080);
		Rectangle porcion = Rectangle(0, 0, g->VisibleClipBounds.Width, g->VisibleClipBounds.Height);
		g->DrawImage(bmp, porcion, tamanio, GraphicsUnit::Pixel);
	}
	if (nivel == 2) {
		Rectangle tamanio = Rectangle(0, 0, 1920, 1200);
		Rectangle porcion = Rectangle(0, 0, g->VisibleClipBounds.Width, g->VisibleClipBounds.Height);
		g->DrawImage(bmp, porcion, tamanio, GraphicsUnit::Pixel);
	}
	if (nivel == 3) {
		Rectangle tamanio = Rectangle(0, 0, 3840, 2400);
		Rectangle porcion = Rectangle(0, 0, g->VisibleClipBounds.Width, g->VisibleClipBounds.Height);
		g->DrawImage(bmp, porcion, tamanio, GraphicsUnit::Pixel);
	}
	if (nivel == 4) {
		Rectangle tamanio = Rectangle(0, 0, 2880, 1800);
		Rectangle porcion = Rectangle(0, 0, g->VisibleClipBounds.Width, g->VisibleClipBounds.Height);
		g->DrawImage(bmp, porcion, tamanio, GraphicsUnit::Pixel);
	}
}