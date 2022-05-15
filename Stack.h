#pragma once

class ArrStack {

private:

	//and here I've found out that being a field array can only have a size varriable as static const
	//as the size of the array in this case should be determined before compiling
	static const size_t size = 10;
	int stackArr[size];
	int arrCellNum = 0;
	bool bIsPushed = false;

public:

	void reset();
	bool push(int num);
	int pop();
	void print();

};