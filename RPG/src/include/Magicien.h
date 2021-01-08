#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN

// include 
#include <string>
#include "Personnage.h" // heritier 


class Magicien : public Personnage
{
public : 
	Magicien(); 
	Magicien(std::string nom, int degats); 
	//void potionArticiellle() const; 
	//void potionNaturelle() const; 
	void sePresenter() const; 

	
private : 
	int m_mana; 
		
}; 


#endif 
