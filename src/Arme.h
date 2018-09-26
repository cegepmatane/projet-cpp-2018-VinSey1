/*
 * Arme.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef ARME_H_
#define ARME_H_

#include "Equipement.h"

namespace DonjonEtDragons {

class Arme: public Equipement {
public:
	Arme();
	Arme(string nom);
	Arme(string nom, int puissance);
	Arme(string nom, string rarete);
	Arme(string nom, string rarete, int prix);
	Arme(string nom, string rarete, int prix, int puissance);

	virtual ~Arme();

	string exporter();

	int getPuissance() const {
		return puissance;
	}

	void setPuissance(int puissance) {
		this->puissance = puissance;
	}

protected:
	int puissance;
};

} /* namespace DonjonEtDragons */

#endif /* ARME_H_ */
