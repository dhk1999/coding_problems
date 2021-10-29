#include <iostream>
#include <string>

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int64_t bird;
	int64_t song = 1;
	int64_t count = 0;

	std::cin >> bird;

	while (bird > 0) {
		if (song > bird) {
			song = 1;
		}
		bird = bird - song;
		song++;
		count++;
	}
	
	std::cout << count;
}
