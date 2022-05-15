#pragma once
#include <cstdint>

class RGBA {
private:

	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;



public:

	RGBA(uint8_t red, uint8_t green, uint8_t blue , uint8_t alpha);

	uint8_t getRed();
	uint8_t getGreen();
	uint8_t getBlue();
	uint8_t getAlpha();

	void print();
};
