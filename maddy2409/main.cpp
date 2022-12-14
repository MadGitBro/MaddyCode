#include <iostream>
#include <vector>
#include <algorithm>


void swap(std::vector<int>& _in, int _a, int _b)
{
	int a = _in[_a];
	int b = _in[_b];
	_in[_a] = b;
	_in[_b] = a;
}

//return = whites value into memory address. think bidmas

// void doesn't return anything. vector for lists.

int maddyadd(int _a, int _b)
{
	int result = _a + _b;
	return result;
}



void maddyprint(std::vector<int> array_)
{
	for (int i = 0; i < array_.size() - 1; i++)
	{
		std::cout << array_[i] << ",";
	}
	int b = array_.size() - 1;
	int c = array_[b];
	std::cout << c << "\n";
}

std::vector<int> maddysort(std::vector<int> array_)
{
	for (int i = 0; i < array_.size() - 1; i++)
	{
		int j = i + 1;
		if (array_[j] < array_[i])
		{
			while (array_[j] < array_[j - 1])
			{
				swap(array_, j, j - 1);
				j--;

				if (j == 0)
					break;
			}
		}

	}
	return array_;
}


std::vector<int> maddysortprint(int a, int b)
{
	std::vector<int> newestlist;
	newestlist.push_back(a);
	if (a < b)
	{
		for (int j = a + 1; j <= b; j++)
		{
			newestlist.push_back(j);
		}
	}
	else
	{
		for (int j = a - 1; j >= b; j--)
		{
			newestlist.push_back(j);
		}
	}
	return newestlist;
}


//std::vector<int> maddyfib(int n)
//{
	//std::vector<int> fiblist;
	//fiblist.push_back(a);
	//for (int x = a + 1; x <= b; x++)
	//{
		//int result = a + x;
		//fiblist.push_back(result);
	//}
	//a++;
	//return fiblist;
//}

int findnextfib(int a, int b)
{
	int resultat = a + b;
	return resultat;
}

std::vector<int> maddyfib(int n)
{
	std::vector<int> fiblist;
	fiblist.push_back(0);
	fiblist.push_back(1);
	while (fiblist.size()<n)
	{
		int nextnum = findnextfib(fiblist[fiblist.size()-1], fiblist[fiblist.size()-2]);
			fiblist.push_back(nextnum);
	}
	return fiblist;
}


int main()
{

	std::vector<int> fiblist = maddyfib(100);
	maddyprint(fiblist);
	
	std::vector<int> maddylistres = maddysortprint(10, 0);
	maddyprint(maddylistres);


	std::vector<int> arrray_ = { 5,2,7,0,1 };
	std::vector<int> sortedlist = maddysort(arrray_);
	maddyprint(sortedlist);

	std::vector<int> newlist;
	newlist.push_back(0);
	newlist.push_back(1);
	newlist.push_back(2);
	newlist.push_back(3);
	maddyprint(newlist);

	std::vector<int> newnewlist;
	for (int i = 0; i < 1001; i++)
	{
		newnewlist.push_back(i);
	}
	maddyprint(newnewlist);

	std::cout << "Hello Maddy, this is standard output to the console \n";
	std::cout << "We use \\n for writing new lines, which puts text on the next line.\n\n";

	int res = maddyadd(5, 6);
	std::cout << res << "\n"; 

	res = maddyadd(2, 7);
	std::cout << res << "\n"; 

    std::vector<int> array_ = { 0,1,3,4,5,6,2,7,8,9,10 };


	std::vector<int> sortedList = array_;
	std::sort(sortedList.begin(), sortedList.end());

	std::vector<int> output = {};

	//here.
	
	for (int i = 0; i < array_.size() - 1; i++)
	{
		int j = i + 1;
		if (array_[j] < array_[i])
		{
			//place number where it belongs
			while (array_[j] < array_[j-1])
			{
				swap(array_, j, j - 1);
				j--;
			}
		}
			
	}




	//for (int i = 0; i < array_.size() - 1; i++)
	//{
	//		int smallestnumber = array_[i]; //value
	//		int smallestindex = i; //index
	//
	//		for (int j = i + 1; j < array_.size(); j++)
	//		{
	//			if (array_[j] < smallestnumber)
	//			{
	//				smallestnumber = array_[j];
	//				smallestindex = j;
	//			}
	//		}
	//		swap(array_,  i, smallestindex);
	//}

	for (auto num : array_)
	{
		std::cout << num << ",";
	}
	std::cout << "\n";



	return 0;
}






// init       ; condition           ; increment
//for (int i = 0; i < array_.size() - 1; i++)
//{
//					// Find the smallest number
//					int smallestSeen = array_[i];
//					int smallestIndex = i;
//					for (int j = i+1; j < array_.size(); j++)
//					{
//									int currentValue = array_[j];
//									if (currentValue < smallestSeen)
//									{
//										smallestSeen = currentValue;
//										smallestIndex = j;
//									}
//					}
//
//					// Swap the smallest with the next index
//					//   array input, location a, location b
//					Swap(array_,);
//}
