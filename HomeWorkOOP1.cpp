// HomeWorkOOP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Power.h"
#include "RGBA.h"
#include "Stack.h"

int main()
{
	//Power task main
	Power pow;

	pow.setNumPow(2.0f,3.0f);
	pow.calculate();
	std::cout << std::endl;

	//RGBA task main
	RGBA rgba (18,16,32,200);

	std::cout << std::endl;
    
	rgba.print();

	//The Stack task main
	ArrStack stack;

	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();

	//just testing warning system.
	stack.pop();
}


