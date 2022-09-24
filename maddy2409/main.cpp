#include <iostream>
#include <vector>

int main()
{
	std::cout << "Hello Maddy, this is standard output to the console \n";
	std::cout << "We use \\n for writing new lines, which puts text on the next line.";

	std::vector<int> anArray = { 0,1,2,3,4,5 };
	for (int i = 0; i < anArray.size(); i++)
	{
		std::cout << "Array Index [" << i << "] -> " << anArray[i] << "\n";
	}

	return 0;
}