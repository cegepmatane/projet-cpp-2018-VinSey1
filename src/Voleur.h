/*
 * Voleur.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef VOLEUR_H_
#define VOLEUR_H_

#include "Joueur.h"

namespace DonjonEtDragons {

class Voleur: public Joueur{
public:
	Voleur();
	Voleur(string nom);
	Voleur(string nom, int finesse);
	Voleur(string nom, int armure, int finesse);

	virtual ~Voleur();

	string exporter();

	int getFinesse() const {
		return finesse;
	}

	void setFinesse(int fureur) {
		this->finesse = fureur;
	}

protected:
	int finesse;
};

};

} /* namespace DonjonEtDragons */

#endif /* VOLEUR_H_ */
