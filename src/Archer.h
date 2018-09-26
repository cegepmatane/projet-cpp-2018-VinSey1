/*
 * Archer.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef ARCHER_H_
#define ARCHER_H_

#include "Joueur.h"

namespace DonjonEtDragons {

class Archer: public Joueur {
public:
	Archer();
	Archer(string nom);
	Archer(string nom, int agilite);
	Archer(string nom, int armure, int agilite);

	virtual ~Archer();

	string exporter();

	int getAgilite() const {
		return agilite;
	}

	void setAgilite(int agilite) {
		this->agilite = agilite;
	}

protected:
	int agilite;
};

} /* namespace DonjonEtDragons */

#endif /* ARCHER_H_ */
