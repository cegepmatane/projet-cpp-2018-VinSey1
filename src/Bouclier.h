/*
 * Bouclier.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef BOUCLIER_H_
#define BOUCLIER_H_

#include "Equipement.h"

namespace DonjonEtDragons {

class Bouclier: public Equipement {
public:
	Bouclier();
	Bouclier(string nom);
	Bouclier(string nom, int blocage);
	Bouclier(string nom, string rarete);
	Bouclier(string nom, string rarete, int prix);
	Bouclier(string nom, string rarete, int prix, int blocage);

	virtual ~Bouclier();

	string exporter();

	int getBlocage() const {
		return blocage;
	}

	void setBlocage(int blocage) {
		this->blocage = blocage;
	}

protected:
	int blocage;
};

} /* namespace DonjonEtDragons */

#endif /* BOUCLIER_H_ */
