#include <iostream>
#include "Fraction.hpp"

using namespace std; 

//constructeur 
Fraction::Fraction(): m_num(0), m_den(1)
{
	
}

Fraction::Fraction (double  a, double b): m_num(a) , m_den (b)
{
    simplifier(); 
    signe(); 
}

Fraction::Fraction(double numerateur) : m_num(numerateur), m_den(1)
{
	simplifier(); 
	signe(); 
}
//simplifier 
double pgcd(int num, int den)
{
	int tempo; 
	while(den != 0)
	{
		tempo = den; 
		den = num % den; 
		num = tempo; 
	}
	
	return num; 
}
Fraction& Fraction::simplifier()
{
	double calculPGCD = pgcd(m_num, m_den); 
	
	m_num = m_num/calculPGCD;
	m_den = m_den/calculPGCD;
	
	return *this; 
}

void Fraction::signe()
{
	if (m_den < 0 && m_num > 0)
	{
		m_num = -m_num; 
		m_den = -m_den;
	} 
	
	if (m_den < 0 && m_num < 0)
	{
		m_num = -m_num; 
		m_den = -m_den;
	}
}

double Fraction::nombreReel()
{
	return (m_num/m_den); 
}


// affichage 
void Fraction::afficheEcran(std::ostream &flux) const 
{
	if (m_den == 1) 
	{
		flux << m_num << endl; 
	}
	else 
	{
		flux << m_num << "/" << m_den <<std::endl; 
	}
}

ostream& operator<<(ostream &flux, Fraction const& fraction)
{
	fraction.afficheEcran(flux); 
	return flux; 
}

//  < or >
bool Fraction::estSuperieur(Fraction const& a) const
{
	return (m_num * a.m_den > m_den * a.m_num); 
}

bool operator>(Fraction const& a, Fraction const& b)
{
	return (a.estSuperieur(b)); 
}  

bool operator<(Fraction const& a, Fraction const& b)
{
	return (a.estSuperieur(b)); 
}  

bool operator!=(Fraction const& a, Fraction const& b)
{
	return !(a.estEgal(b)); 
}

bool operator>=(Fraction const& a, Fraction const& b)
{
	return !(a.estSuperieur(b)); 
}

bool operator<=(Fraction const& a, Fraction const& b)
{
	return !(a.estSuperieur(b)); 
}

//egal
bool Fraction::estEgal(Fraction const& a) const
 {
	 return (m_num == a.m_num && m_den == a.m_den);  
 }

bool operator==(Fraction const& a, Fraction const& b)
{
	return a.estEgal(b); 
}

// operation 

Fraction operator+(Fraction const& a, Fraction const& b)
{
	Fraction  copie(a); 
	 copie+= b; 
	return copie; 
}

Fraction& Fraction::operator+=(Fraction const& a)
{
	Fraction tempo; 
	tempo.m_num = ((getNum() * a.m_den) + (m_den * a.m_num)); 
	tempo.m_den = (a.getDen() * m_den); 
	
	simplifier(); 
	
	return *this; 
}

Fraction& Fraction::operator-=(Fraction const& a)
{
	m_num = ((m_num * a.m_den) - (m_den * a.m_num)); 
	m_den = (a.m_den * m_den); 
	
	simplifier(); 
	signe(); 
	return *this; 
}

Fraction operator-(Fraction const& a, Fraction const& b)
{
	Fraction copie(a);  
	copie -= b; 
	return copie; 
}

Fraction& Fraction::operator*=(Fraction const& a)
{
	m_num = a.m_num * m_num; 
	m_den = a.m_den * m_den; 
	
	simplifier(); 
	
	return *this; 
}

Fraction operator*(Fraction const& a, Fraction const& b)
{
	Fraction copie(a);   
	copie*= b; 
	return copie; 
}

Fraction& Fraction::operator/=(Fraction const& a)
{
	m_num = m_num * a.m_den; 
	m_den = m_den * a.m_num; 
	
	simplifier(); 
	signe(); 
	return *this; 
}
Fraction operator/(Fraction const& a, Fraction const& b)
{
	Fraction copie(a);  
	copie /= b; 
	return copie; 
}

// getters

double Fraction::getNum() const 
{
	return m_num; 
}

double Fraction::getDen() const 
{
	return m_den;  
}

Fraction operator-(Fraction const& a)
{
	Fraction autre(a); 
	autre*=-1; 
	return a; 
}


// destructeur 
Fraction::~Fraction()
{
	
}
// sans surcharge des opérateurs 
/*
Fraction  Fraction::addition(Fraction a)
{
	Fraction tempo; 
	tempo.m_num = ((m_num * a.m_den) + (m_den * a.m_num)); 
	tempo.m_den = (a.m_den * m_den); 
	
	// call a method to test if it's > 0
	return tempo; 
}

Fraction Fraction::soustraction(Fraction a, Fraction b)
{
	Fraction tempo; 
	tempo.m_num = ((a.m_num * b.m_num) - (a.m_den*b.m_num)); 
	tempo.m_den = (a.m_den * b.m_den); 
	
	
	// call a method to test if it's > 0
	return tempo; 
}

Fraction Fraction::multipication(Fraction a, Fraction b)
{
	Fraction tempo; 
	tempo.m_num = a.m_num * b.m_num; 
	tempo.m_den = a.m_den * b.m_den; 
	
	return tempo; 
}

Fraction Fraction::division(Fraction a, Fraction b)
{
	Fraction tempo; 
	tempo.m_num = a.m_num * b.m_den; 
	tempo.m_den = a.m_den * b.m_num ; 
	
	return tempo; 
}
*/
