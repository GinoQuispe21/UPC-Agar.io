#pragma once
#include "Comida.h"
class Jugador :public Circulo {
public:
	Jugador(int x, int y, int dx, int dy, int masa, int radio);
	~Jugador();
	void Mover_Arriba(Graphics^g);
	void Mover_Abajo(Graphics^g);
	void Mover_Izquierda(Graphics^g);
	void Mover_Derecha(Graphics^g);
	void Mostrar(Graphics^g, Bitmap^bmp);
};
Jugador::Jugador(int x, int y, int dx, int dy, int masa, int radio) :Circulo(x, y, dx, dy, masa, radio) {
	
}
Jugador::~Jugador() {  

}
void Jugador::Mover_Arriba(Graphics^g) {
	if (y - dy > g->VisibleClipBounds.Top)
		y -= dy;
}
void Jugador::Mover_Abajo(Graphics^g) {
	if (y + dy + radio < g->VisibleClipBounds.Bottom)
		y += dy;
}
void Jugador::Mover_Izquierda(Graphics^g) {
	if (x - dx > g->VisibleClipBounds.Left)
		x -= dx;
}
void Jugador::Mover_Derecha(Graphics^g) {
	if (x + dx + radio < g->VisibleClipBounds.Right)
		x += dx;
}
void Jugador::Mostrar(Graphics^g, Bitmap^bmp) {
	g->DrawImage(bmp, x, y, radio, radio);
}