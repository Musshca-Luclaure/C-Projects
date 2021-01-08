#include <iostream>
#include <string>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"

int main (void)
{
	// Personnage 
	/*Personnage  David, Goliath("aller", 50);  
	David  = Goliath; 
	Goliath.attaquer(David); 
	David.boirePotionDeVie(50); 
	Goliath.attaquer(David); 
	David.attaquer(Goliath); 
	
	Goliath.changerArme("Tres mechant Arme", 60); 
	
	std::cout<<"David"<<std::endl; 
	David.afficherEtat(); */
	
	Personnage monPero("Lucie", 60); 
	Magicien monGuero("Guerrier", 55); 
	monPero.sePresenter(); 
	monGuero.sePresenter(); 
	
	
	return (EXIT_SUCCESS); 
}
