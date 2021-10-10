/*
 * molinete.h
 *
 *  Created on: 1 oct. 2021
 *      Author: facundo
 */

#ifndef MOLINETE_H_
#define MOLINETE_H_

enum estadoMolinete {
	BLOQUEADO,
	DESBLOQUEADO,
};

class Molinete {
	private:
		unsigned int personasQueEntraron;
		unsigned int personasQueSalieron;
		unsigned int maximoPersonasDentro;
		estadoMolinete estado;

	public:
		/*
		 * Pre
		 * Post
		 */
		Molinete ();

		/*
		 * Pre: Debe recibir como argumento un numero entero positivo
		 * Post: Asigna la cantidad seteoPersonas al atributo maximoPersonasDentro
		 */
		 void setMaximoPersonasDentro (unsigned int seteoPersonas);

		/*
		 * Pre: El molinete no debe estar bloquedo
		 * Post: + 1 a atributo PersonasQueEntraron
		 * Puede bloquear al molinete si PersonasQueEntraron -  > maximoPersonasDentro
		 */
		void dejarEntrar ();

		/*
		 * Pre:
		 * Post: + 1 a atributo PersonasQueSalieron
		 * Puede desbloquear al molinete si PersonasQueEntraron PersonasQueSalieron < maximoPersonasDentro
		 */
		void dejarSalir ();

		/*
		 * Pre
		 * Post: Devuelve el atributo PersonasQueEntraron
		 */
		unsigned int getPersonasQueEntraron ();

		/*
		 * Pre
		 * Post: Devuelve el atributo PersonasQueSalieron
		 */
		unsigned int getPersonasQueSalieron ();

		/*
		* Pre
		* Post: El estado del molinete bloquedo o no
		*/
		estadoMolinete getEstado ();

		/*
		 * Pre
		 * Post
		 */
		virtual ~Molinete ();

};


#endif /* MOLINETE_H_ */
