#pragma once
#include "Escenario.h"
#include "Jugador.h"
#include "Enemigo.h"
#include "Virus.h"
#include "Comida.h"
public enum direccion { izquierda, derecha, arriba, abajo };
class Juego {
	Chile*objChile;
	Venezuela*objVenezuela;
	Dinamarca*objDinamarca;
	Argentina*objArgentina;
	Francia*objFrancia;
	vector<Comida*>vecComida;
	vector<Jugador*>vecJugador;
	vector<Virus*>vecVirus;
	Escenario*objEscenario;
	MenuPrincipal*objMenuPrincipal;
	int cont = 0;
	int vidas;
	vector<Virus*>vecVirus2;

public:
	Juego(int v);
	~Juego();
	void Mostrar_Escenario(Graphics^g, Bitmap^bmp, int nivel);
	void Mostrar_Virus(Graphics^g, Bitmap^bmp);
	void Mover_Chile(Graphics^g);
	void Mover_Venezuela(Graphics^g);
	void Mover_Dinamarca(Graphics^g);
	void Mover_Argentina(Graphics^g);
	void Mover_Francia(Graphics^g);
	void Mostrar_Chile(Graphics^g, Bitmap^bmp);
	void Mostrar_Venezuela(Graphics^g, Bitmap^bmp);
	void Mostrar_Dinamarca(Graphics^g, Bitmap^bmp);
	void Mostrar_Argentina(Graphics^g, Bitmap^bmp);
	void Mostrar_Francia(Graphics^g, Bitmap^bmp);
	void Mover_Jugador(Graphics^g, direccion movimineto);
	void Mostrar_Jugador(Graphics^g, Bitmap^bmp);
	void Insertar_Comida();
	void Mostrar_Comida(Graphics^g, Bitmap^bmp);
	void Mover_Virus();
	void Colision_Virus();
	void Colision_Jugador_Virus();
	void Colision_Jugador_Comida();
	void Colision_Jugador_Chile();
	void Colision_Jugador_Venezuela();
	void Colision_Jugador_Dinamarca();
	void Colision_Jugador_Argentina();
	void Colision_Jugador_Francia();
	void Colision_Chile_Comida();
	void Colision_Venezuela_Comida();
	void Colision_Dinamarca_Comida();
	void Colision_Argentina_Comida();
	void Colision_Francia_Comida();
	void Colision_Chile_Venezuela();
	void Colision_Chile_Dinamarca();
	void Colision_Chile_Argentina();
	void Colision_Chile_Francia();
	void Colision_Venezuela_Dinamarca();
	void Colision_Venezuela_Argentina();
	void Colision_Venezuela_Francia();
	void Colision_Argentina_Dinamarca();
	void Colision_Argentina_Francia();
	void Colision_Dinamarca_Francia();
	void Dividir();
	int get_masa_jugador();
	int get_masa_Chile();
	int get_masa_Venezuela();
	int get_masa_Dinamarca();
	int get_masa_Argentina();
	int get_masa_Francia();
	int get_cant_comidas();
	int get_cant_vidas();
	
};
Juego::Juego(int v) {
	Random r;
	vecJugador.push_back(new Jugador(500, 350, 20, 20, 0, 15));
	objChile = new Chile(r.Next(10, 200), r.Next(10, 200), 20, 20, 0, 15);
	objVenezuela = new Venezuela(r.Next(10, 500), r.Next(10, 300), 20, 20, 0, 15);
	objDinamarca = new Dinamarca(r.Next(10, 800), r.Next(10, 400), 20, 20, 0, 15);
	objArgentina = new Argentina(r.Next(10, 1100), r.Next(10, 500), 20, 20, 0, 15);
	objFrancia = new Francia(r.Next(10, 1000), r.Next(10, 600), 20, 20, 0, 15);
	vecVirus.push_back(new Virus(r.Next(10, 500), r.Next(10, 500), 0, 0, 0, 50));
	vecVirus.push_back(new Virus(r.Next(10, 1000), r.Next(10, 650), 0, 0, 0, 50));
	vecVirus.push_back(new Virus(r.Next(10, 1100), r.Next(10, 900), 0, 0, 0, 50));
	vidas = v;
}
Juego::~Juego() {
	
}
void Juego::Mostrar_Escenario(Graphics^g, Bitmap^bmp, int nivel) {
	if (nivel == 1)
		objEscenario->Mostrar(g, bmp, 1);
	if (nivel == 2)
		objEscenario->Mostrar(g, bmp, 2);
	if (nivel == 3)
		objEscenario->Mostrar(g, bmp, 3);
	if (nivel == 4)
		objEscenario->Mostrar(g, bmp, 4);
}
void Juego::Mover_Virus() {
	for (int i = 0; i < vecVirus2.size(); i++) {
		vecVirus2.at(i)->Mover();
	}
}
void Juego::Mostrar_Virus(Graphics^g, Bitmap^bmp) {
	for (int i = 0; i < vecVirus.size(); i++) {
		vecVirus.at(i)->Mostrar(g, bmp);
	}
	for (int i = 0; i < vecVirus2.size(); i++) {
		vecVirus2.at(i)->Mostrar(g, bmp);
	}
}
void Juego::Colision_Virus() {
	for (int i = 0; i < vecVirus2.size(); i++) {
		if(objArgentina != NULL){
			if(vecVirus2.at(i)->get_Rec().IntersectsWith(objArgentina->get_Rec())) {
				objArgentina = NULL;
				vecVirus2.erase(vecVirus2.begin() + i);
				break;
			}
		}
		if (objChile != NULL) {
			if (vecVirus2.at(i)->get_Rec().IntersectsWith(objChile->get_Rec())) {
				objChile = NULL;
				vecVirus2.erase(vecVirus2.begin() + i);
				break;
			}
		}
		if (objDinamarca != NULL) {
			if (vecVirus2.at(i)->get_Rec().IntersectsWith(objDinamarca->get_Rec())) {
				objDinamarca = NULL;
				vecVirus2.erase(vecVirus2.begin() + i);
				break;
			}
		}
		if (objFrancia != NULL) {
			if (vecVirus2.at(i)->get_Rec().IntersectsWith(objFrancia->get_Rec())) {
				objFrancia = NULL;
				vecVirus2.erase(vecVirus2.begin() + i);
				break;
			}
		}
		if (objVenezuela != NULL) {
			if (vecVirus2.at(i)->get_Rec().IntersectsWith(objVenezuela->get_Rec())) {
				objVenezuela = NULL;
				vecVirus2.erase(vecVirus2.begin() + i);
				break;
			}
		}
	}
}
void Juego::Mover_Chile(Graphics^g) {
	if (objChile != NULL)
		objChile->Mover(g);
}
void Juego::Mover_Venezuela(Graphics^g) {
	if(objVenezuela != NULL)
		objVenezuela->Mover(g);
}
void Juego::Mover_Dinamarca(Graphics^g) {
	if(objDinamarca != NULL)
		objDinamarca->Mover(g);
}
void Juego::Mover_Argentina(Graphics^g) {
	if(objArgentina != NULL)
		objArgentina->Mover(g);
}
void Juego::Mover_Francia(Graphics^g) {
	if(objFrancia != NULL)
		objFrancia->Mover(g);
}
void Juego::Mostrar_Chile(Graphics^g, Bitmap^bmp) {
	if(objChile!= NULL)
		objChile->Mostrar(g, bmp);
}
void Juego::Mostrar_Venezuela(Graphics^g, Bitmap^bmp) {
	if (objVenezuela != NULL) 
		objVenezuela->Mostrar(g, bmp);
}
void Juego::Mostrar_Dinamarca(Graphics^g, Bitmap^bmp) {
	if(objDinamarca != NULL)
		objDinamarca->Mostrar(g, bmp);
}
void Juego::Mostrar_Argentina(Graphics^g, Bitmap^bmp) {
	if(objArgentina != NULL)
		objArgentina->Mostrar(g, bmp);
}
void Juego::Mostrar_Francia(Graphics^g, Bitmap^bmp) {
	if(objFrancia != NULL)
		objFrancia->Mostrar(g, bmp);
}
void Juego::Mover_Jugador(Graphics^g, direccion movimiento) {
	for (int i = 0; i < vecJugador.size(); i++) {
		switch (movimiento)	{
		case direccion::abajo:vecJugador.at(i)->Mover_Abajo(g); break;
		case direccion::arriba:vecJugador.at(i)->Mover_Arriba(g); break;
		case direccion::izquierda:vecJugador.at(i)->Mover_Izquierda(g); break;
		case direccion::derecha:vecJugador.at(i)->Mover_Derecha(g); break;
		}
	}
}
void Juego::Mostrar_Jugador(Graphics^g, Bitmap^bmp) {
	for (int i = 0; i < vecJugador.size(); i++)
		vecJugador.at(i)->Mostrar(g, bmp);
}
void Juego::Insertar_Comida() {
	Random r;
	if (vecComida.size() < 30)
		vecComida.push_back(new Comida(r.Next(10, 1100), r.Next(10, 650), 0, 0, 5, 10));
}
void Juego::Colision_Jugador_Virus() {
	for (int i = 0; i < vecJugador.size(); i++) {
		for (int j = 0; j < vecVirus.size(); j++) {
			if ((vecJugador.at(i)->get_Rec()).IntersectsWith(vecVirus.at(j)->get_Rec())) {
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() - 25, vecVirus.at(j)->get_y() - 25, -25, -25, 0, 15));
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() + 25, vecVirus.at(j)->get_y() - 25, 25, -25, 0, 15));
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() - 25, vecVirus.at(j)->get_y() , -25, 0, 0, 15));
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() + 25, vecVirus.at(j)->get_y() , 25,  0,0, 15));
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() - 25, vecVirus.at(j)->get_y() + 25, -25, +25, 0, 15));
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() + 25, vecVirus.at(j)->get_y() + 25, 25, 25, 0, 15));
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() , vecVirus.at(j)->get_y() + 25, 0, +25, 0, 15));
				vecVirus2.push_back(new Virus(vecVirus.at(j)->get_x() , vecVirus.at(j)->get_y() - 25, 0, -25, 0, 15));
				vecVirus.erase(vecVirus.begin() + j);
			}
		}
	}
}
void Juego::Mostrar_Comida(Graphics^g, Bitmap^bmp) {
	for (int i = 0; i < vecComida.size(); i++)
		vecComida.at(i)->Mostrar(g, bmp);
}
void Juego::Colision_Jugador_Comida() {
	for (int j = 0; j < vecJugador.size(); j++) {
		for (int i = 0; i < vecComida.size(); i++) {
			if ((vecJugador.at(j)->get_Rec()).IntersectsWith(vecComida.at(i)->get_Rec())) {
				vecComida.erase(vecComida.begin() + i);
				vecJugador.at(j)->set_dx(vecJugador.at(j)->get_dx() - 1);
				vecJugador.at(j)->set_dy(vecJugador.at(j)->get_dy() - 1);
				vecJugador.at(j)->set_masa(vecJugador.at(j)->get_masa() + 5);
				vecJugador.at(j)->set_radio(vecJugador.at(j)->get_radio() + 5);
			}
		}
	}
}
void Juego::Colision_Jugador_Chile() {
	if (objChile != NULL) {
		for (int j = 0; j < vecJugador.size(); j++) {
			Rectangle a = Rectangle(vecJugador.at(j)->get_x(), vecJugador.at(j)->get_y(), vecJugador.at(j)->get_radio(), vecJugador.at(j)->get_radio());
			Rectangle b = Rectangle(objChile->get_x(), objChile->get_y(), objChile->get_radio(), objChile->get_radio());
			if (a.IntersectsWith(b)) {
				if (vecJugador.at(j)->get_radio() > objChile->get_radio()) {
					vecJugador.at(j)->set_dx(vecJugador.at(j)->get_dx() - 1);
					vecJugador.at(j)->set_dy(vecJugador.at(j)->get_dy() - 1);
					vecJugador.at(j)->set_masa(vecJugador.at(j)->get_masa() + objChile->get_masa());
					vecJugador.at(j)->set_radio(vecJugador.at(j)->get_radio() + objChile->get_radio());
					objChile = NULL;
					break;
				}
				else if (vecJugador.at(j)->get_radio() < objChile->get_radio()) {
					objChile->set_dx(objChile->get_dx() - 1);
					objChile->set_dy(objChile->get_dy() - 1);
					objChile->set_masa(objChile->get_masa() + vecJugador.at(j)->get_masa());
					objChile->set_radio(objChile->get_radio() + vecJugador.at(j)->get_radio());
					if (vecJugador.size() > 1)
						vecJugador.erase(vecJugador.begin() + j);
					else {
						vecJugador.at(0) = new Jugador(490, 320, 25, 25, 0, 15);
						vidas--;
					}
						
				}
			}
		}
	}
}
void Juego::Colision_Jugador_Venezuela() {
	if (objVenezuela != NULL) {
		for (int j = 0; j < vecJugador.size(); j++) {
			Rectangle a = Rectangle(vecJugador.at(j)->get_x(), vecJugador.at(j)->get_y(), vecJugador.at(j)->get_radio(), vecJugador.at(j)->get_radio());
			Rectangle b = Rectangle(objVenezuela->get_x(), objVenezuela->get_y(), objVenezuela->get_radio(), objVenezuela->get_radio());
			if (a.IntersectsWith(b)) {
				if (vecJugador.at(j)->get_radio() > objVenezuela->get_radio()) {
					vecJugador.at(j)->set_dx(vecJugador.at(j)->get_dx() - 1);
					vecJugador.at(j)->set_dy(vecJugador.at(j)->get_dy() - 1);
					vecJugador.at(j)->set_masa(vecJugador.at(j)->get_masa() + objVenezuela->get_masa());
					vecJugador.at(j)->set_radio(vecJugador.at(j)->get_radio() + objVenezuela->get_radio());
					objVenezuela = NULL;
					break;
				}
				else if (vecJugador.at(j)->get_radio() < objVenezuela->get_radio()) {
					objVenezuela->set_dx(objVenezuela->get_dx() - 1);
					objVenezuela->set_dy(objVenezuela->get_dy() - 1);
					objVenezuela->set_masa(objVenezuela->get_masa() + vecJugador.at(j)->get_masa());
					objVenezuela->set_radio(objVenezuela->get_radio() + vecJugador.at(j)->get_radio());
					if (vecJugador.size() > 1)
						vecJugador.erase(vecJugador.begin() + j);
					else {
						vecJugador.at(0) = new Jugador(490, 320, 25, 25, 0, 15);
						vidas--;
					}
				}
			}
		}
	}
}
void Juego::Colision_Jugador_Dinamarca() {
	if (objDinamarca != NULL) {
		for (int j = 0; j < vecJugador.size(); j++) {
			Rectangle a = Rectangle(vecJugador.at(j)->get_x(), vecJugador.at(j)->get_y(), vecJugador.at(j)->get_radio(), vecJugador.at(j)->get_radio());
			Rectangle b = Rectangle(objDinamarca->get_x(), objDinamarca->get_y(), objDinamarca->get_radio(), objDinamarca->get_radio());
			if (a.IntersectsWith(b)) {
				if (vecJugador.at(j)->get_radio() > objDinamarca->get_radio()) {
					vecJugador.at(j)->set_dx(vecJugador.at(j)->get_dx() - 1);
					vecJugador.at(j)->set_dy(vecJugador.at(j)->get_dy() - 1);
					vecJugador.at(j)->set_masa(vecJugador.at(j)->get_masa() + objDinamarca->get_masa());
					vecJugador.at(j)->set_radio(vecJugador.at(j)->get_radio() + objDinamarca->get_radio());
					objDinamarca = NULL;
					break;
				}
				else if (vecJugador.at(j)->get_radio() < objDinamarca->get_radio()) {
					objDinamarca->set_dx(objDinamarca->get_dx() - 1);
					objDinamarca->set_dy(objDinamarca->get_dy() - 1);
					objDinamarca->set_masa(objDinamarca->get_masa() + vecJugador.at(j)->get_masa());
					objDinamarca->set_radio(objDinamarca->get_radio() + vecJugador.at(j)->get_radio());
					if (vecJugador.size() > 1)
						vecJugador.erase(vecJugador.begin() + j);
					else {
						vecJugador.at(0) = new Jugador(490, 320, 25, 25, 0, 15);
						vidas--;
					}
				}
			}
		}
	}
}
void Juego::Colision_Jugador_Argentina(){
	if (objArgentina != NULL) {
		for (int j = 0; j < vecJugador.size(); j++) {
			Rectangle a = Rectangle(vecJugador.at(j)->get_x(), vecJugador.at(j)->get_y(), vecJugador.at(j)->get_radio(), vecJugador.at(j)->get_radio());
			Rectangle b = Rectangle(objArgentina->get_x(), objArgentina->get_y(), objArgentina->get_radio(), objArgentina->get_radio());;
			if (a.IntersectsWith(b)) {
				if (vecJugador.at(j)->get_radio() > objArgentina->get_radio()) {
					vecJugador.at(j)->set_dx(vecJugador.at(j)->get_dx() - 1);
					vecJugador.at(j)->set_dy(vecJugador.at(j)->get_dy() - 1);
					vecJugador.at(j)->set_masa(vecJugador.at(j)->get_masa() + objArgentina->get_masa());
					vecJugador.at(j)->set_radio(vecJugador.at(j)->get_radio() + objArgentina->get_radio());
					objArgentina = NULL;
					break;
				}
				else if (vecJugador.at(j)->get_radio() < objArgentina->get_radio()) {
					objArgentina->set_dx(objArgentina->get_dx() - 1);
					objArgentina->set_dy(objArgentina->get_dy() - 1);
					objArgentina->set_masa(objArgentina->get_masa() + vecJugador.at(j)->get_masa());
					objArgentina->set_radio(objArgentina->get_radio() + vecJugador.at(j)->get_radio());
					if (vecJugador.size() > 1)
						vecJugador.erase(vecJugador.begin() + j);
					else {
						vecJugador.at(0) = new Jugador(490, 320, 25, 25, 0, 15);
						vidas--;
					}
				}
			}
		}
	}
}
void Juego::Colision_Jugador_Francia() {
	if (objFrancia != NULL) {
		for (int j = 0; j < vecJugador.size(); j++) {
			Rectangle a = Rectangle(vecJugador.at(j)->get_x(), vecJugador.at(j)->get_y(), vecJugador.at(j)->get_radio(), vecJugador.at(j)->get_radio());
			Rectangle b = Rectangle(objFrancia->get_x(), objFrancia->get_y(), objFrancia->get_radio(), objFrancia->get_radio());;
			if (a.IntersectsWith(b)) {
				if (vecJugador.at(j)->get_radio() > objFrancia->get_radio()) {
					vecJugador.at(j)->set_dx(vecJugador.at(j)->get_dx() - 1);
					vecJugador.at(j)->set_dy(vecJugador.at(j)->get_dy() - 1);
					vecJugador.at(j)->set_masa(vecJugador.at(j)->get_masa() + objFrancia->get_masa());
					vecJugador.at(j)->set_radio(vecJugador.at(j)->get_radio() + objFrancia->get_radio());
					objFrancia = NULL;
					break;
				}
				else if (vecJugador.at(j)->get_radio() < objFrancia->get_radio()) {
					objFrancia->set_dx(objFrancia->get_dx() - 1);
					objFrancia->set_dy(objFrancia->get_dy() - 1);
					objFrancia->set_masa(objFrancia->get_masa() + vecJugador.at(j)->get_masa());
					objFrancia->set_radio(objFrancia->get_radio() + vecJugador.at(j)->get_radio());
					if (vecJugador.size() > 1)
						vecJugador.erase(vecJugador.begin() + j);
					else {
						vecJugador.at(0) = new Jugador(490, 320, 25, 25, 0, 15);
						vidas--;
					}
				}
			}
		}
	}
}
void Juego::Colision_Chile_Comida() {
	if (objChile != NULL) {
		Rectangle a = Rectangle(objChile->get_x(), objChile->get_y(), objChile->get_radio(), objChile->get_radio());
		for (int i = 0; i < vecComida.size(); i++) {
			Rectangle b = Rectangle(vecComida.at(i)->get_x(), vecComida.at(i)->get_y(), vecComida.at(i)->get_radio(), vecComida.at(i)->get_radio());
			if (a.IntersectsWith(b)) {
				vecComida.erase(vecComida.begin() + i);
				objChile->set_dx(objChile->get_dx() - 1);
				objChile->set_dy(objChile->get_dy() - 1);
				objChile->set_masa(objChile->get_masa() + 5);
				objChile->set_radio(objChile->get_radio() + 5);
			}
		}
	}
}
void Juego::Colision_Venezuela_Comida() {
	if (objVenezuela != NULL) {
		Rectangle a = Rectangle(objVenezuela->get_x(), objVenezuela->get_y(), objVenezuela->get_radio(), objVenezuela->get_radio());
		for (int i = 0; i < vecComida.size(); i++) {
			Rectangle b = Rectangle(vecComida.at(i)->get_x(), vecComida.at(i)->get_y(), vecComida.at(i)->get_radio(), vecComida.at(i)->get_radio());
			if (a.IntersectsWith(b)) {
				vecComida.erase(vecComida.begin() + i);
				objVenezuela->set_dx(objVenezuela->get_dx() - 1);
				objVenezuela->set_dy(objVenezuela->get_dy() - 1);
				objVenezuela->set_masa(objVenezuela->get_masa() + 5);
				objVenezuela->set_radio(objVenezuela->get_radio() + 5);
			}
		}
	}
}
void Juego::Colision_Dinamarca_Comida() {
	if (objDinamarca != NULL) {
		Rectangle a = Rectangle(objDinamarca->get_x(), objDinamarca->get_y(), objDinamarca->get_radio(), objDinamarca->get_radio());
		for (int i = 0; i < vecComida.size(); i++) {
			Rectangle b = Rectangle(vecComida.at(i)->get_x(), vecComida.at(i)->get_y(), vecComida.at(i)->get_radio(), vecComida.at(i)->get_radio());
			if (a.IntersectsWith(b)) {
				vecComida.erase(vecComida.begin() + i);
				objDinamarca->set_dx(objDinamarca->get_dx() - 1);
				objDinamarca->set_dy(objDinamarca->get_dy() - 1);
				objDinamarca->set_masa(objDinamarca->get_masa() + 5);
				objDinamarca->set_radio(objDinamarca->get_radio() + 5);
			}
		}
	}
}
void Juego::Colision_Argentina_Comida() {
	if (objArgentina != NULL) {
		Rectangle a = Rectangle(objArgentina->get_x(), objArgentina->get_y(), objArgentina->get_radio(), objArgentina->get_radio());
		for (int i = 0; i < vecComida.size(); i++) {
			Rectangle b = Rectangle(vecComida.at(i)->get_x(), vecComida.at(i)->get_y(), vecComida.at(i)->get_radio(), vecComida.at(i)->get_radio());
			if (a.IntersectsWith(b)) {
				vecComida.erase(vecComida.begin() + i);
				objArgentina->set_dx(objArgentina->get_dx() - 1);
				objArgentina->set_dy(objArgentina->get_dy() - 1);
				objArgentina->set_masa(objArgentina->get_masa() + 5);
				objArgentina->set_radio(objArgentina->get_radio() + 5);
			}
		}
	}
}
void Juego::Colision_Francia_Comida() {
	if (objFrancia != NULL) {
		Rectangle a = Rectangle(objFrancia->get_x(), objFrancia->get_y(), objFrancia->get_radio(), objFrancia->get_radio());
		for (int i = 0; i < vecComida.size(); i++) {
			Rectangle b = Rectangle(vecComida.at(i)->get_x(), vecComida.at(i)->get_y(), vecComida.at(i)->get_radio(), vecComida.at(i)->get_radio());
			if (a.IntersectsWith(b)) {
				vecComida.erase(vecComida.begin() + i);
				objFrancia->set_dx(objFrancia->get_dx() - 1);
				objFrancia->set_dy(objFrancia->get_dy() - 1);
				objFrancia->set_masa(objFrancia->get_masa() + 5);
				objFrancia->set_radio(objFrancia->get_radio() + 5);
			}
		}
	}
}
void Juego::Colision_Chile_Venezuela() {
	if (objChile != NULL && objVenezuela != NULL) {
		Rectangle a = Rectangle(objChile->get_x(), objChile->get_y(), objChile->get_radio(), objChile->get_radio());
		Rectangle b = Rectangle(objVenezuela->get_x(), objVenezuela->get_y(), objVenezuela->get_radio(), objVenezuela->get_radio());
		if (a.IntersectsWith(b)) {
			if (objChile->get_radio() > objVenezuela->get_radio()) {
				objChile->set_dx(objChile->get_dx() - 1);
				objChile->set_dy(objChile->get_dy() - 1);
				objChile->set_masa(objChile->get_masa() + objVenezuela->get_masa());
				objChile->set_radio(objChile->get_radio() + objVenezuela->get_radio());
				objVenezuela = NULL;
			}
			else if (objChile->get_radio() < objVenezuela->get_radio()) {
				objVenezuela->set_dx(objVenezuela->get_dx() - 1);
				objVenezuela->set_dy(objVenezuela->get_dy() - 1);
				objVenezuela->set_masa(objVenezuela->get_masa() + objChile->get_masa());
				objVenezuela->set_radio(objVenezuela->get_radio() + objChile->get_radio());
				objChile = NULL;
			}
		}
	}
}
void Juego::Colision_Chile_Dinamarca() {
	if (objChile != NULL && objDinamarca != NULL) {
		Rectangle a = Rectangle(objChile->get_x(), objChile->get_y(), objChile->get_radio(), objChile->get_radio());
		Rectangle b = Rectangle(objDinamarca->get_x(), objDinamarca->get_y(), objDinamarca->get_radio(), objDinamarca->get_radio());
		if (a.IntersectsWith(b)) {
			if (objChile->get_radio() > objDinamarca->get_radio()) {
				objChile->set_dx(objChile->get_dx() - 1);
				objChile->set_dy(objChile->get_dy() - 1);
				objChile->set_masa(objChile->get_masa() + objDinamarca->get_masa());
				objChile->set_radio(objChile->get_radio() + objDinamarca->get_radio());
				objDinamarca = NULL;
			}
			else if (objChile->get_radio() < objDinamarca->get_radio()) {
				objDinamarca->set_dx(objDinamarca->get_dx() - 1);
				objDinamarca->set_dy(objDinamarca->get_dy() - 1);
				objDinamarca->set_masa(objDinamarca->get_masa() + objChile->get_masa());
				objDinamarca->set_radio(objDinamarca->get_radio() + objChile->get_radio());
				objChile = NULL;
			}
		}
	}
}
void Juego::Colision_Chile_Argentina(){
	if (objChile != NULL && objArgentina != NULL) {
		Rectangle a = Rectangle(objChile->get_x(), objChile->get_y(), objChile->get_radio(), objChile->get_radio());
		Rectangle b = Rectangle(objArgentina->get_x(), objArgentina->get_y(), objArgentina->get_radio(), objArgentina->get_radio());
		if (a.IntersectsWith(b)) {
			if (objChile->get_radio() > objArgentina->get_radio()) {
				objChile->set_dx(objChile->get_dx() - 1);
				objChile->set_dy(objChile->get_dy() - 1);
				objChile->set_masa(objChile->get_masa() + objArgentina->get_masa());
				objChile->set_radio(objChile->get_radio() + objArgentina->get_radio());
				objArgentina = NULL;
			}
			else if (objChile->get_radio() < objArgentina->get_radio()) {
				objArgentina->set_dx(objArgentina->get_dx() - 1);
				objArgentina->set_dy(objArgentina->get_dy() - 1);
				objArgentina->set_masa(objArgentina->get_masa() + objChile->get_masa());
				objArgentina->set_radio(objArgentina->get_radio() + objChile->get_radio());
				objChile = NULL;
			}
		}
	}
}
void Juego::Colision_Chile_Francia() {
	if (objChile != NULL && objFrancia != NULL) {
		Rectangle a = Rectangle(objChile->get_x(), objChile->get_y(), objChile->get_radio(), objChile->get_radio());
		Rectangle b = Rectangle(objFrancia->get_x(), objFrancia->get_y(), objFrancia->get_radio(), objFrancia->get_radio());
		if (a.IntersectsWith(b)) {
			if (objChile->get_radio() > objFrancia->get_radio()) {
				objChile->set_dx(objChile->get_dx() - 1);
				objChile->set_dy(objChile->get_dy() - 1);
				objChile->set_masa(objChile->get_masa() + objFrancia->get_masa());
				objChile->set_radio(objChile->get_radio() + objFrancia->get_radio());
				objFrancia = NULL;
			}
			else if (objChile->get_radio() < objFrancia->get_radio()) {
				objFrancia->set_dx(objFrancia->get_dx() - 1);
				objFrancia->set_dy(objFrancia->get_dy() - 1);
				objFrancia->set_masa(objFrancia->get_masa() + objChile->get_masa());
				objFrancia->set_radio(objFrancia->get_radio() + objChile->get_radio());
				objChile = NULL;
			}
		}
	}
}
void Juego::Colision_Venezuela_Dinamarca() {
	if (objVenezuela != NULL && objDinamarca != NULL) {
		Rectangle a = Rectangle(objVenezuela->get_x(), objVenezuela->get_y(), objVenezuela->get_radio(), objVenezuela->get_radio());
		Rectangle b = Rectangle(objDinamarca->get_x(), objDinamarca->get_y(), objDinamarca->get_radio(), objDinamarca->get_radio());
		if (a.IntersectsWith(b)) {
			if (objVenezuela->get_radio() > objDinamarca->get_radio()) {
				objVenezuela->set_dx(objVenezuela->get_dx() - 1);
				objVenezuela->set_dy(objVenezuela->get_dy() - 1);
				objVenezuela->set_masa(objVenezuela->get_masa() + objDinamarca->get_masa());
				objVenezuela->set_radio(objVenezuela->get_radio() + objDinamarca->get_radio());
				objDinamarca = NULL;
			}
			else if (objVenezuela->get_radio() < objDinamarca->get_radio()) {
				objDinamarca->set_dx(objDinamarca->get_dx() - 1);
				objDinamarca->set_dy(objDinamarca->get_dy() - 1);
				objDinamarca->set_masa(objDinamarca->get_masa() + objVenezuela->get_masa());
				objDinamarca->set_radio(objDinamarca->get_radio() + objVenezuela->get_radio());
				objVenezuela = NULL;
			}
		}
	}
}
void Juego::Colision_Venezuela_Argentina() {
	if (objVenezuela != NULL && objArgentina != NULL) {
		Rectangle a = Rectangle(objVenezuela->get_x(), objVenezuela->get_y(), objVenezuela->get_radio(), objVenezuela->get_radio());
		Rectangle b = Rectangle(objArgentina->get_x(), objArgentina->get_y(), objArgentina->get_radio(), objArgentina->get_radio());
		if (a.IntersectsWith(b)) {
			if (objVenezuela->get_radio() > objArgentina->get_radio()) {
				objVenezuela->set_dx(objVenezuela->get_dx() - 1);
				objVenezuela->set_dy(objVenezuela->get_dy() - 1);
				objVenezuela->set_masa(objVenezuela->get_masa() + objArgentina->get_masa());
				objVenezuela->set_radio(objVenezuela->get_radio() + objArgentina->get_radio());
				objArgentina = NULL;
			}
			else if (objVenezuela->get_radio() < objArgentina->get_radio()) {
				objArgentina->set_dx(objArgentina->get_dx() - 1);
				objArgentina->set_dy(objArgentina->get_dy() - 1);
				objArgentina->set_masa(objArgentina->get_masa() + objVenezuela->get_masa());
				objArgentina->set_radio(objArgentina->get_radio() + objVenezuela->get_radio());
				objVenezuela = NULL;
			}
		}
	}
}
void Juego::Colision_Venezuela_Francia() {
	if (objVenezuela != NULL && objFrancia != NULL) {
		Rectangle a = Rectangle(objVenezuela->get_x(), objVenezuela->get_y(), objVenezuela->get_radio(), objVenezuela->get_radio());
		Rectangle b = Rectangle(objFrancia->get_x(), objFrancia->get_y(), objFrancia->get_radio(), objFrancia->get_radio());
		if (a.IntersectsWith(b)) {
			if (objVenezuela->get_radio() > objFrancia->get_radio()) {
				objVenezuela->set_dx(objVenezuela->get_dx() - 1);
				objVenezuela->set_dy(objVenezuela->get_dy() - 1);
				objVenezuela->set_masa(objVenezuela->get_masa() + objArgentina->get_masa());
				objVenezuela->set_radio(objVenezuela->get_radio() + objArgentina->get_radio());
				objFrancia = NULL;
			}
			else if (objVenezuela->get_radio() < objFrancia->get_radio()) {
				objFrancia->set_dx(objFrancia->get_dx() - 1);
				objFrancia->set_dy(objFrancia->get_dy() - 1);
				objFrancia->set_masa(objFrancia->get_masa() + objVenezuela->get_masa());
				objFrancia->set_radio(objFrancia->get_radio() + objVenezuela->get_radio());
				objVenezuela = NULL;
			}
		}
	}
}
void Juego::Colision_Argentina_Dinamarca(){
	if (objArgentina != NULL && objDinamarca != NULL) {
		Rectangle b = Rectangle(objDinamarca->get_x(), objDinamarca->get_y(), objDinamarca->get_radio(), objDinamarca->get_radio());
		Rectangle a = Rectangle(objArgentina->get_x(), objArgentina->get_y(), objArgentina->get_radio(), objArgentina->get_radio());
		if (a.IntersectsWith(b)) {
			if (objArgentina->get_radio() > objDinamarca->get_radio()) {
				objArgentina->set_dx(objArgentina->get_dx() - 1);
				objArgentina->set_dy(objArgentina->get_dy() - 1);
				objArgentina->set_masa(objArgentina->get_masa() + objDinamarca->get_masa());
				objArgentina->set_radio(objArgentina->get_radio() + objDinamarca->get_radio());
				objDinamarca = NULL;
			}
			else if (objArgentina->get_radio() < objDinamarca->get_radio()) {
				objDinamarca->set_dx(objDinamarca->get_dx() - 1);
				objDinamarca->set_dy(objDinamarca->get_dy() - 1);
				objDinamarca->set_masa(objDinamarca->get_masa() + objArgentina->get_masa());
				objDinamarca->set_radio(objDinamarca->get_radio() + objArgentina->get_radio());
				objArgentina = NULL;
			}
		}
	}
}
void Juego::Colision_Argentina_Francia() {
	if (objArgentina != NULL && objFrancia != NULL) {
		Rectangle b = Rectangle(objFrancia->get_x(), objFrancia->get_y(), objFrancia->get_radio(), objFrancia->get_radio());
		Rectangle a = Rectangle(objArgentina->get_x(), objArgentina->get_y(), objArgentina->get_radio(), objArgentina->get_radio());
		if (a.IntersectsWith(b)) {
			if (objArgentina->get_radio() > objFrancia->get_radio()) {
				objArgentina->set_dx(objArgentina->get_dx() - 1);
				objArgentina->set_dy(objArgentina->get_dy() - 1);
				objArgentina->set_masa(objArgentina->get_masa() + objFrancia->get_masa());
				objArgentina->set_radio(objArgentina->get_radio() + objFrancia->get_radio());
				objFrancia = NULL;
			}
			else if (objArgentina->get_radio() < objFrancia->get_radio()) {
				objFrancia->set_dx(objFrancia->get_dx() - 1);
				objFrancia->set_dy(objFrancia->get_dy() - 1);
				objFrancia->set_masa(objFrancia->get_masa() + objArgentina->get_masa());
				objFrancia->set_radio(objFrancia->get_radio() + objArgentina->get_radio());
				objArgentina = NULL;
			}
		}
	}
}
void Juego::Colision_Dinamarca_Francia() {
	if (objFrancia != NULL && objDinamarca != NULL) {
		Rectangle b = Rectangle(objDinamarca->get_x(), objDinamarca->get_y(), objDinamarca->get_radio(), objDinamarca->get_radio());
		Rectangle a = Rectangle(objFrancia->get_x(), objFrancia->get_y(), objFrancia->get_radio(), objFrancia->get_radio());
		if (a.IntersectsWith(b)) {
			if (objFrancia->get_radio() > objDinamarca->get_radio()) {
				objFrancia->set_dx(objFrancia->get_dx() - 1);
				objFrancia->set_dy(objFrancia->get_dy() - 1);
				objFrancia->set_masa(objFrancia->get_masa() + objDinamarca->get_masa());
				objFrancia->set_radio(objFrancia->get_radio() + objDinamarca->get_radio());
				objDinamarca = NULL;
			}
			else if (objFrancia->get_radio() < objDinamarca->get_radio()) {
				objDinamarca->set_dx(objDinamarca->get_dx() - 1);
				objDinamarca->set_dy(objDinamarca->get_dy() - 1);
				objDinamarca->set_masa(objDinamarca->get_masa() + objFrancia->get_masa());
				objDinamarca->set_radio(objDinamarca->get_radio() + objFrancia->get_radio());
				objFrancia = NULL;
			}
		}
	}
}
void Juego::Dividir() {
	vecJugador.at(0)->set_radio(vecJugador.at(0)->get_radio() / 2);
	vecJugador.push_back(new Jugador(vecJugador.at(cont)->get_x() + vecJugador.at(cont)->get_radio(), vecJugador.at(cont)->get_y(),
		vecJugador.at(cont)->get_dx(), vecJugador.at(cont)->get_dy(), vecJugador.at(cont)->get_masa(),
		vecJugador.at(0)->get_radio()));
	for (int i = 1; i < vecJugador.size(); i++) {
		vecJugador.at(i)->set_radio(vecJugador.at(0)->get_radio());
	}
	cont++;
}
int Juego::get_masa_jugador()	{
	for(int j = 0; j < vecJugador.size();j++)
		return vecJugador.at(j)->get_masa();							 
}
int Juego::get_masa_Chile()		{ 
	if (objChile != NULL) 
		return objChile->get_masa();		 
}
int Juego::get_masa_Venezuela() { 
	if (objVenezuela != NULL) 
		return objVenezuela->get_masa(); 
}
int Juego::get_masa_Dinamarca() { 
	if (objDinamarca != NULL) 
		return objDinamarca->get_masa(); 
}
int Juego::get_masa_Argentina() { 
	if (objArgentina != NULL) 
		return objArgentina->get_masa(); 
}
int Juego::get_masa_Francia() { 
	if(objFrancia != NULL)
		return objFrancia->get_masa();		 
}
int Juego::get_cant_comidas() { 
	return vecComida.size();									 
}
int Juego::get_cant_vidas()	{ 
	return vidas;												 
}