#include <iostream>
#include <vector>
#include <algorithm>


void Swap(std::vector<int>& _in, int _a, int _b)
{
	int a = _in[_a];
	int b = _in[_b];
	_in[_a] = b;
	_in[_b] = a;
}

int main()
{
	std::cout << "Hello Maddy, this is standard output to the console \n";
	std::cout << "We use \\n for writing new lines, which puts text on the next line.";

	std::vector<int> input = { 5, 3, 2, 7 };
	Swap(input, 0, 3);

	std::vector<int> sortedList = input;
	std::sort(sortedList.begin(), sortedList.end());

	std::vector<int> output = {};

	// 4, 9, 3, 1

	// find lowest number

	// move to index 0

	// find the next lowest

	// move to index 1

	// loop until...  index = end

	// end-1 = 2

	// 4 9 3 1
	// swap
	// 1 9 3 4
	// swap
	// 1 3 9 4
	// swap
	// 1 3 4 9




	return 0;
}

