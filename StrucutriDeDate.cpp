// StrucutriDeDate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Stack
{
private:
	std::vector<int> elements;
public:
	void push(int valeu)
	{

	}
	int top()
	{

	}
	bool empty()
	{

	}
	void display()
	{

	}
	int pop()
	{

	}


};






//O(n)
bool gasesteElement(int arr[], int element)
{
	int dimens = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < dimens; i++)
	{
		if (arr[i] == element)
			return true;
	}
	return false;
}

int main()
{
	int myArr[5] = { 6,99,32,44,0 };
	//myArr[index] = O(1) accesare instanta	
	std::cout << myArr[4] << std::endl;
	gasesteElement(myArr, 0);
}