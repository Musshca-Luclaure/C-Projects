#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <string>
#include <iostream>

using namespace std; 

class Fraction
{
	public: 
		Fraction(); 
		Fraction(double  a, double b);
		Fraction(double numerateur); 
	   ~Fraction(); 
	    Fraction& operator+=(Fraction const& a); 
	    Fraction& operator-=(Fraction const& a); 
	    Fraction& operator*=(Fraction const& a); 
	    Fraction& operator/=(Fraction const& a); 
	    

		
		void afficheEcran(std::ostream &flux) const;
		Fraction& simplifier(); 
		void signe(); 
		double nombreReel(); 


		
		bool estSuperieur(Fraction const& a) const; 
		bool estInferieur(Fraction const& a) const; 
		bool estEgal(Fraction const& a) const; 
		bool superieurEgal(Fraction const& a) const; 
		bool inferieurEgal(Fraction const& a) const; 
		double getNum() const ; 
		double getDen() const ; 

		
		/*
		 * 
		Fraction addition (Fraction a); 
		Fraction soustraction (Fraction a, Fraction b); 
		Fraction multipication (Fraction a, Fraction b); 
		Fraction division(Fraction a, Fraction b); 
		* 
		* */

	private:
		double m_num; 
		double m_den; 
	
}; 
ostream& operator<<(ostream &flux, Fraction const& fraction); 
double pgdc(int num, int den);

bool operator>(Fraction const& a, Fraction const& b);   
bool operator<(Fraction const& a, Fraction const& b);  
bool operator==(Fraction const& a, Fraction const& b);    
bool operator!=(Fraction const& a, Fraction const& b); 
bool operator>=(Fraction const& a, Fraction const& b);   
bool operator<=(Fraction const& a, Fraction const& b);   

Fraction operator+(Fraction const& a, Fraction const& b); 
Fraction operator-(Fraction const& a, Fraction const& b); 
Fraction operator*(Fraction const& a, Fraction const& b); 
Fraction operator/(Fraction const& a, Fraction const& b); 

Fraction operator-(Fraction const& a); 


#endif 
