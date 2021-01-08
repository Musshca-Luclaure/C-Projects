#include <string>
#include <iostream>
#include "Magicien.h"

using namespace std;  


Magicien::Magicien(): Personnage(), m_mana(100)
{
	
}
Magicien::Magicien(std::string nom, int degats): Personnage(nom, degats), m_mana(100)
{
	
}
void Magicien::sePresenter() const
{
	Personnage::sePresenter(); 
	cout << "Je suis un faux magicien " << endl; 
}
