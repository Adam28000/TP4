/*
* Date : 25 f�vrier 2019
* Auteur : AbdeB
*/
#include "PlatBio.h"

PlatBio::PlatBio(string nom, double prix, double cout, double ecotaxe): Plat(nom, prix, cout), ecoTaxe_(ecotaxe)
{
}


PlatBio::~ PlatBio(){}

double PlatBio::getEcoTaxe() const
{
	return ecoTaxe_;
}

void PlatBio::setEcoTaxe(double ecoTaxe)
{
	ecoTaxe_ = ecoTaxe;
}


Plat * PlatBio:: clone () const
{
	Plat* nouveauClone = new PlatBio(nom_, prix_, cout_, ecoTaxe_);
	return nouveauClone;

}
double PlatBio::getPrixDeRevient()
{
	return (prix_ - cout_ + ecoTaxe_);
}

void PlatBio::afficherPlat(ostream& os) const
{
    Plat::afficherPlat(os);
    os << "Plat Bio comprend une taxe ecologique de :" << ecoTaxe_ << "$" << endl;
}
