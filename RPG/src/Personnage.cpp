#include <string>
#include <iostream>
#include "Personnage.h"

using namespace std; 

Personnage::Personnage():m_vie(100), m_mana(100), m_arme(0)
{
	m_arme = new Arme(); 
}

Personnage::Personnage(std::string nom, int degats):m_vie(100), m_mana(100), m_arme(0)
{
	m_arme = new Arme(nom, degats); 
}

Personnage::Personnage(Personnage const& personnageCopier):m_vie(personnageCopier.m_vie), m_mana(personnageCopier.m_mana), m_arme(0)
{
	m_arme = new Arme(*(personnageCopier.m_arme));  // const& personnageCopier cest une reference 
}

Personnage& Personnage::operator=(Personnage const& personnageCopier)
{
	if (this != &personnageCopier){
		m_vie = personnageCopier.m_vie; 
		m_mana = personnageCopier.m_mana; 
		delete m_arme; 
		m_arme = new Arme(*(personnageCopier.m_arme)); 
	}
	
	return  *this; 
}


void Personnage::recevoirDegats(int degats)
{
	m_vie -= degats; 
	m_vie = (m_vie < 0) ? 0 : m_vie; // to come back in case 
}

void Personnage::attaquer(Personnage &adversaire)
{
	adversaire.recevoirDegats(m_arme->getDegats());  // getters with arme
}

void Personnage::boirePotionDeVie(int potion)
{
	m_vie += potion; 
	m_vie = (m_vie > 100) ? 100 : m_vie; // to come back in case 
}

void Personnage::changerArme (std::string nomNouvelleArme, int nouveauDegats)
{
	m_arme->changer(nomNouvelleArme, nouveauDegats); 
}

bool Personnage::estVivant ()
{
	return (m_vie > 0); 
}

void Personnage::sePresenter() const
{
	std::cout<< "ma vie: "
			 << m_vie
			 << "\n"
			 << "Mana: "
			 << m_mana
			 <<std::endl; 
	m_arme->afficher(); 
}

Personnage::~Personnage()
{
	delete m_arme; // supprime le pointeur m_arme. 
}


