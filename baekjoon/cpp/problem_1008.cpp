#include <iostream>
#include <sstream>
#include <string>


int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string inputStr;
	std::getline(std::cin, inputStr);
	std::stringstream ss(inputStr);

	int32_t num1;
	int32_t num2;

	ss >> num1;
	ss >> num2;

	long double retVal = num1 / double(num2);

	std::cout.precision(10);
	std::cout << retVal;
	

}
