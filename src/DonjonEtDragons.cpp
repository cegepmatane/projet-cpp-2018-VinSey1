//============================================================================
// Name        : DonjonEtDragons.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
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

	ofstream fichierDonjon;
	fichierDonjon.open("data/donjon.xml");

	Joueur* joueur;
	joueur = new Guerrier("Guerrier", 50, 100);
	fichierDonjon << "<donjon>" << joueur->exporter() << "</donjon>";

	joueur = new Archer("Archer", 50, 100);
	fichierDonjon << "<donjon>" << joueur->exporter() << "</donjon>";

	joueur = new Voleur("Voleur", 50, 100);
	fichierDonjon << "<donjon>" << joueur->exporter() << "</donjon>";

	Equipement* equipement;
	equipement = new Pieds("Pieds", "Rare", 100, 50);
	fichierDonjon << "<donjon>" << equipement->exporter() << "</donjon>";

	equipement = new Arme("Epee", "Rare", 100, 50);
	fichierDonjon << "<donjon>" << equipement->exporter() << "</donjon>";

	equipement = new Bouclier("Bouclier", "Rare", 100, 50);
	fichierDonjon << "<donjon>" << equipement->exporter() << "</donjon>";

	return 0;
}
