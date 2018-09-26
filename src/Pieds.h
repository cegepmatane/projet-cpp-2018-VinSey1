/*
 * Pieds.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef PIEDS_H_
#define PIEDS_H_

#include "Equipement.h"

namespace DonjonEtDragons {

class Pieds: public Equipement {
public:
	Pieds();
	Pieds(string nom);
	Pieds(string nom, int bonusFuite);
	Pieds(string nom, string rarete);
	Pieds(string nom, string rarete, int prix);
	Pieds(string nom, string rarete, int prix, int bonusFuite);

	virtual ~Pieds();

	string exporter();

	int getBonusFuite() const {
		return bonusFuite;
	}

	void setBonusFuite(int bonusFuite) {
		this->bonusFuite = bonusFuite;
	}

protected:
	int bonusFuite;
};

} /* namespace DonjonEtDragons */

#endif /* PIEDS_H_ */
