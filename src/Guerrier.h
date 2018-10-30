/*
 * Guerrier.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef GUERRIER_H_
#define GUERRIER_H_

#include "Joueur.h"

namespace DonjonEtDragons {

class Guerrier: public Joueur {
public:
	Guerrier();
	Guerrier(string nom);
	Guerrier(string nom, int fureur);
	Guerrier(string nom, int armure, int fureur);

	virtual ~Guerrier();

	string exporter();

	int getFureur() const {
		return fureur;
	}

	void setFureur(int fureur) {
		this->fureur = fureur;
	}

protected:
	int fureur;
};

} /* namespace DonjonEtDragons */

#endif /* GUERRIER_H_ */
