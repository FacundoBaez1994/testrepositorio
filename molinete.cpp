/*
 * molinete.cpp
 *
 *  Created on: 1 oct. 2021
 *      Author: facundo
 */

#include "molinete.h"

Molinete:: Molinete () {
	this -> personasQueEntraron = 0;
	this -> personasQueSalieron = 0;
	this -> maximoPersonasDentro = 0;
	this -> estado = DESBLOQUEADO;

}

void Molinete:: setMaximoPersonasDentro (unsigned int seteoPersonas) {
	this -> maximoPersonasDentro = seteoPersonas;
}

unsigned int Molinete:: getPersonasQueEntraron (){
	return this -> personasQueEntraron;
}

unsigned int Molinete:: getPersonasQueSalieron (){
	return this -> personasQueSalieron;
}

estadoMolinete Molinete:: getEstado (){
	return this -> estado;
}

void Molinete:: dejarSalir (){
	this -> personasQueSalieron ++;
	if (this -> personasQueEntraron - this -> personasQueSalieron < this -> maximoPersonasDentro - 1) {
		this -> estado = DESBLOQUEADO;
	}
};

void Molinete:: dejarEntrar (){
	if (this -> estado == DESBLOQUEADO)
	{
		this -> personasQueEntraron ++;
		if (this -> personasQueEntraron - this -> personasQueSalieron > this -> maximoPersonasDentro - 1) {
			this -> estado = BLOQUEADO;
		}
	}
};



Molinete:: ~Molinete () {}



