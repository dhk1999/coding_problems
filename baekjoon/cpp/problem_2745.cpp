#include <iostream>
#include <string>

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string number;
	std::int32_t notation;
	std::int64_t result = 0;

	std::cin >> number >> notation;

	std::reverse(number.begin(), number.end());

	for (int i = 0; i < number.length(); i++) {
		if ('A' <= number.at(i) && number.at(i) <= 'Z') {
			result += (number.at(i) - 'A' + 10) * (std::pow(notation, i));
		} else {
			result += (number.at(i) - '0') * (std::pow(notation, i));
		}
	}

	std::cout << result;

}
