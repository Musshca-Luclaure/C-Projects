#include "include/Arme.h"

Arme::Arme(): m_nom("Epee de l'esprit"), m_degats(10)
{
	
}

Arme::Arme(std::string nom, int degats): m_nom(nom), m_degats(degats)
{
	
}

void Arme::changer(std::string nom , int degats)
{
	m_nom = nom; 
	m_degats = degats; 
}

void Arme::afficher() const
{
	std::cout << "Arme :"
	          << m_nom 
	          << "(degats" 
	          << m_degats 
	          << ")" 
	          << std::endl; 
}

int Arme::getDegats() const
{
	return m_degats; 
}
