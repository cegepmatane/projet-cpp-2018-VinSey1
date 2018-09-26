//============================================================================
// Name        : DonjonEtDragons.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Joueur.h"
#include "Archer.h"
#include "Voleur.h"
#include "Guerrier.h"

#include "Equipement.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Pieds.h"


using namespace std;
using namespace DonjonEtDragons;

int main() {

	Joueur* joueur;
	joueur = new Guerrier("Guerrier", 50, 100);
	cout << joueur->exporter() << endl;

	joueur = new Archer("Archer", 50, 100);
	cout << joueur->exporter() << endl;

	joueur = new Voleur("Voleur", 50, 100);
	cout << joueur->exporter() << endl;

	Equipement* equipement;
	equipement = new Pieds("Pieds", "Rare", 100, 50);
	cout << equipement->exporter() << endl;

	equipement = new Arme("Épée", "Rare", 100, 50);
	cout << equipement->exporter() << endl;

	equipement = new Pieds("Bouclier", "Rare", 100, 50);
	cout << equipement->exporter() << endl;

	return 0;
}
