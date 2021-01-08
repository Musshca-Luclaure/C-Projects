#include <string>
#include <iostream>
#include "Guerrier.h"

void Guerrier::frapperTresFort() 
{
    m_vie = m_vie -5; 
	m_vie = (m_vie < 0) ? 0 : m_vie; // to come back in case 
} 
