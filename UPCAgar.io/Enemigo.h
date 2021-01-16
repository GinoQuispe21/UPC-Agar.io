#pragma once
#include "Circulo.h"
class Enemigo :public Circulo {
public:
	Enemigo(int x, int y, int dx, int dy, int masa, int radio);
	~Enemigo();
};
Enemigo::Enemigo(int x, int y, int dx, int dy, int masa, int radio) :Circulo(x, y, dx, dy, masa, radio) {
	
}
Enemigo::~Enemigo() {

}

//CHILE
class Chile :public Enemigo {
public:
	Chile(int x, int y, int dx, int dy, int masa, int radio);
	~Chile();
	void Mover(Graphics^g);
	void Mostrar(Graphics^g, Bitmap^bmp);
};
Chile::Chile(int x, int y, int dx, int dy, int masa, int radio) :Enemigo(x, y, dx, dy, masa, radio) {

}
Chile::~Chile() {

}
void Chile::Mover(Graphics^g) {
	if (x + dx < 0 || x + dx + radio > g->VisibleClipBounds.Width)
		dx *= -1;
	if (y + dy < 0 || y + dy + radio > g->VisibleClipBounds.Height)
		dy *= -1;
	x += dx;
	y += dy;
}
void Chile::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}

//VENEZUELA
class Venezuela :public Enemigo {
public:
	Venezuela(int x, int y, int dx, int dy, int masa, int radio);
	~Venezuela();
	void Mover(Graphics^g);
	void Mostrar(Graphics^g, Bitmap^bmp);
};
Venezuela::Venezuela(int x, int y, int dx, int dy, int masa, int radio) :Enemigo(x, y, dx, dy, masa, radio) {

}
Venezuela::~Venezuela() {

}
void Venezuela::Mover(Graphics^g) {
	if (x + dx < 0 || x + dx + radio > g->VisibleClipBounds.Width)
		dx *= -1;
	if (y + dy < 0 || y + dy + radio > g->VisibleClipBounds.Height)
		dy *= -1;
	x += dx;
	y += dy;
}
void Venezuela::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}

//DINAMARCA
class Dinamarca :public Enemigo {
public:
	Dinamarca(int x, int y, int dx, int dy, int masa, int radio);
	~Dinamarca();
	void Mover(Graphics^g);
	void Mostrar(Graphics^g, Bitmap^bmp);
};
Dinamarca::Dinamarca(int x, int y, int dx, int dy, int masa, int radio) :Enemigo(x, y, dx, dy, masa, radio) {

}
Dinamarca::~Dinamarca() {

}
void Dinamarca::Mover(Graphics^g) {
	if (x + dx < 0 || x + dx + radio > g->VisibleClipBounds.Width)
		dx *= -1;
	if (y + dy < 0 || y + dy + radio > g->VisibleClipBounds.Height)
		dy *= -1;
	x += dx;
	y += dy;
}
void Dinamarca::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}

//ARGENTINA
class Argentina: public Enemigo
{
public:
	Argentina(int x, int y, int dx, int dy, int masa, int radio);
	~Argentina();
	void Mover(Graphics^g);
	void Mostrar(Graphics^g, Bitmap^bmp);
};

Argentina::Argentina(int x, int y, int dx, int dy, int masa, int radio) : Enemigo(x, y, dx, dy, masa, radio) {}
Argentina::~Argentina(){}

void Argentina::Mover(Graphics^g) {
	if (x + dx < 0 || x + dx + radio > g->VisibleClipBounds.Width)
		dx *= -1;
	if (y + dy < 0 || y + dy + radio > g->VisibleClipBounds.Height)
		dy *= -1;
	x += dx;
	y += dy;
}
void Argentina::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}

//FRANCIA
class Francia : public Enemigo
{
public:
	Francia(int x, int y, int dx, int dy, int masa, int radio);
	~Francia();
	void Mover(Graphics^g);
	void Mostrar(Graphics^g, Bitmap^bmp);
};

Francia::Francia(int x, int y, int dx, int dy, int masa, int radio) : Enemigo(x, y, dx, dy, masa, radio) {}
Francia::~Francia() {}

void Francia::Mover(Graphics^g) {
	if (x + dx < 0 || x + dx + radio > g->VisibleClipBounds.Width)
		dx *= -1;
	if (y + dy < 0 || y + dy + radio > g->VisibleClipBounds.Height)
		dy *= -1;
	x += dx;
	y += dy;
}
void Francia::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}