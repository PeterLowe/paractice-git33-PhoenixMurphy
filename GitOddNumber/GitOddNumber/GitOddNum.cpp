//Phoenix Murphy
//C00306141

#include <iostream>

int main()
{
	//delcaring your variables
	int number = 0;
	const int TWO = 2;
	int result = 0;

	//getting the number from the user
	std::cout << "Please enter your number:" << std::endl;
	std::cin >> number;

	//finding out if it is odd or even
	result = number % 2;
	if (result == 0)
	{
		std::cout << "Your number is even" << std::endl;
	}
	else
	{
		std::cout << "Your number is odd" << std::endl;
	}

	return 0;
}