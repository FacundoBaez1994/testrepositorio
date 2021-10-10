/*
 * principal.cpp
 *
 *  Created on: 1 oct. 2021
 *      Author: facundo
 */
#include <iostream>
#include "molinete.h"

int main ()
{
	Molinete * Molinete1 = new Molinete ();
	Molinete1 -> setMaximoPersonasDentro (10);

	std::cout <<"Intentan entrar 20 Personas " << std::endl;
	for (int i = 0; i < 20; i++ ){
		Molinete1 -> dejarEntrar ();
	}
	std::cout <<"Entraron "   <<  Molinete1 -> getPersonasQueEntraron () << " Personas " << std::endl;


	std::cout <<"Salen 5 Personas " << std::endl;
	for (int i = 0; i < 5; i++ ){
		Molinete1 -> dejarSalir ();
	}

	std::cout << "Hay "  << Molinete1 -> getPersonasQueEntraron ()  - Molinete1 -> getPersonasQueSalieron ()
			<< " Personas dentro" << std::endl;

	std::cout <<"Intentan entrar 40 Personas más" << std::endl;
	for (int i = 0; i < 40; i++ ){
		Molinete1 -> dejarEntrar ();
	}
	std::cout << "Hay "  << Molinete1 -> getPersonasQueEntraron ()  - Molinete1 -> getPersonasQueSalieron ()
			<< " Personas dentro" << std::endl;

	if (Molinete1 -> getEstado () == DESBLOQUEADO) {
		std::cout <<"MOLINETE DESBLOQUEADO" << std::endl;
		// Prende el LED verde
	} else{
		std::cout <<"MOLINETE BLOQUEADO" << std::endl;
		// Prende el LED rojo
	}


	Molinete1 -> ~Molinete (); // destruyo molinete
	return 0;
}


