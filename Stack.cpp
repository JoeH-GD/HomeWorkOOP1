#include<iostream>
#include "Stack.h"


void ArrStack::reset()
{
	for (int i = 0; i < size; i++)
	{
		stackArr[i] = 0;
	}

	
	bIsPushed = false;

	arrCellNum = 0;
}

bool ArrStack::push(int num)
{
	if (arrCellNum < size)
	{
		stackArr[arrCellNum] = num;

		bIsPushed = true;

		arrCellNum++;
	}

	else {
		std::cout << "The stack is full!";
			bIsPushed = false;
	}

	return bIsPushed;
}

int ArrStack::pop()
{
	int number =0;
	if (arrCellNum>=0)
	{
		number = stackArr[arrCellNum];
		stackArr[arrCellNum] = 0;

		if (arrCellNum > 0) {
			arrCellNum--;
		}
	}

	if (arrCellNum == 0 && stackArr[arrCellNum] == 0)
		std::cout << "Warning! The stack is empty, can't pop!";

	return number;
}

void ArrStack::print()
{
	std::cout << "(";

	if (arrCellNum>0)
	{
		for (int i = 0; i <arrCellNum; i++)
		{
			std::cout << stackArr[i] << " ";
		}

		std::cout<<")" <<std::endl;
	}

	if (arrCellNum ==0)
	{
		std::cout << " )" << std::endl;
	}
}
