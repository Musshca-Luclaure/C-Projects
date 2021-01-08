#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Fraction.hpp"

using namespace std; 

int main (void)
{
	Fraction a(4, -2); 
	Fraction b(2, 6); 
	Fraction c; 
	/*c = a.addition(b); 
	c.afficheEcran(); */
	c = a - b;
	cout << c << endl; 
	cout << a << endl; 
	cout << b << endl; 
	if (a > b)
	{
		cout << a <<  "is bigger than" << b << endl; 
	}
	else if (a < b)
	{
		cout << a <<  "is less than" << b << endl; 
	}
	else if (a != b)
    {
		cout << "Fractions are equals" << endl; 
	}
	
	
	
	
	
	return 0; 
}
