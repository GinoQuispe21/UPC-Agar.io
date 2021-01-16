#pragma once
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Diagnostics;
class Figura {
protected:
	int x, y, dx, dy, masa;
public:
	Figura(int x, int y, int dx, int dy, int masa);
	~Figura();
	void set_x(int x);
	void set_y(int y);
	void set_dx(int dx);
	void set_dy(int dy);
	void set_masa(int masa);
	int get_x();
	int get_y();
	int get_dx();
	int get_dy();
	int get_masa();
	virtual void Mover(Graphics^g);
	virtual void Mostrar(Graphics^g, Bitmap^bmp);
};
Figura::Figura(int x, int y, int dx, int dy, int masa) {
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->dy = dy;
	this->masa = masa;
}
Figura::~Figura() {

}
void Figura::set_x(int x)			{ this->x = x;			 }
void Figura::set_y(int y)			{ this->y = y;			 }
void Figura::set_dx(int dx)			{ this->dx = dx;		 }
void Figura::set_dy(int dy)			{ this->dy = dy;		 }
void Figura::set_masa(int masa)		{ this->masa = masa;	 }
int Figura::get_x()					{ return x;				 }
int Figura::get_y()					{ return y;				 }
int Figura::get_dx()				{ return dx;			 }
int Figura::get_dy()				{ return dy;			 }
int Figura::get_masa()				{ return masa;			 }
void Figura::Mover(Graphics^g) {

}
void Figura::Mostrar(Graphics^g, Bitmap^bmp) {

}