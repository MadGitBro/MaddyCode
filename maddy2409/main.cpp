#include <iostream>
#include <vector>


int main()
{
	std::cout << "Hello Maddy, this is standard output to the console \n";
	std::cout << "We use \\n for writing new lines, which puts text on the next line.";

	std::vector<int> anArray = { 5,7,2,12,4,55 };

	bool a = Eval(-1, anArray);
	bool b = rEval(-1, anArray);


	for (int i = 0; i < anArray.size(); i++)
	{
		std::cout << "Array Index [" << i << "] -> " << anArray[i] << "\n";
	}

	std::cout << "Hello\n";

	std::cout << anArray[0] ;
	std::cout << "\n";
	std::cout << anArray [5] ;
	std::cout << "\n";
	std::cout << anArray[0] + anArray[5] ;
	

	//   Start       while              increment
	for (int i = 5; i > -1 ;  i--)
	{
		std::cout << "Array Index [" << i << "] -> " << anArray[i] << "\n";
	}
	
	std::cout << "Hello?\n";

	return 0;
}

