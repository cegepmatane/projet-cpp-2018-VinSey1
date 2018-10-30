/*
 * Archer.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef MAGICIEN_H_
#define MAGICIEN_H_

#include "Joueur.h"

namespace DonjonEtDragons {

class Magicien: public Joueur {
public:
	Magicien();
	Magicien(string nom);
	Magicien(string nom, int magie);
	Magicien(string nom, int armure, int agilite);

	virtual ~Magicien();

	string exporter();

	int getMagie() const {
		return magie;
	}

	void setMagie(int magie) {
		this->magie = magie;
	}

protected:
	int magie;
};

} /* namespace DonjonEtDragons */

#endif /* MAGICIEN_H_ */
