#include <iostream>
#include <cstdint>
#include "RGBA.h"

RGBA::RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
{
	//Just checking
	std::cout << "RGBA created";
}

//It's good practice to use getters
uint8_t RGBA::getRed()
{
	return m_red;
}

uint8_t RGBA::getGreen()
{
	return m_green;
}

uint8_t RGBA::getBlue()
{
	return m_blue;
}

uint8_t RGBA::getAlpha()
{
	return m_alpha;
}

void RGBA::print()
{
	//uint8_t is not printable in console so I'm converting it here
	//I use two methods to remember synthax for both
	std::cout << "The value of red is: " << static_cast<unsigned int>(getRed())<<std::endl;
	std::cout << "The value of green is: " << static_cast<unsigned int>( getGreen()) << std::endl;
	std::cout << "The value of blue is: " << unsigned int(getBlue()) << std::endl;
	std::cout << "The value of alpha is: " << unsigned int(getAlpha()) << std::endl;
}
