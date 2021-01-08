#include <string>
#include <iostream>
#include "Garrage.h"

using namespace std; 

Vehicule::Vehicule(int prix):  m_prix(prix)
{
}
Vehicule::~Vehicule()
{
	
}

void Vehicule::affiche() const
{
	cout << "Vehicule, prix: "
	    << m_prix << endl; 
}

Voiture::Voiture(int prix, int porte): Vehicule(prix),  m_portes(porte)
{
	
}

Voiture::~Voiture()
{
	
}

int Voiture::nbreRoue() const
{
	return 4; 
}

void Voiture::affiche() const
{
	cout << "voiture, prix: "
	    << m_prix 
	    << "portiere"
	    << m_portes
	    << endl; 
}


Moto::Moto(int prix, int vitesse): Vehicule(prix),  m_vitesse(vitesse)
{
	
}

Moto::~Moto()
{
	
}

void Moto::affiche() const
{
	cout << "Moto, prix: "
	    << m_prix 
	    << "Vitesse"
	    << m_vitesse
	    << endl; 
	cout << Moto::nbreRoue() << endl; 
}

int Moto::nbreRoue() const
{
	return 2; 
}
