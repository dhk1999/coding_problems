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

	int32_t a;
	int32_t b;

	ss >> a;
	ss >> b;

	int32_t retVal = a + b;

	std::cout << retVal;


}
