#include <iostream>
#include <string>
#include <vector>

class CSCS
{
private:
	int64_t number = 0;
	int64_t count = -1;
public:
	CSCS();
	~CSCS();
	void userInput();
	int solve();
	void innerSolver(int64_t i);

};

CSCS::CSCS() {
	// constructor
};

CSCS::~CSCS() {
	// destructor
};

void CSCS::userInput() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	std::cin >> number;
};

int CSCS::solve() {
	innerSolver(number);
	return count;
};

void CSCS::innerSolver(int64_t i) {
	count++;
	if (i == 1)
	{
		return;
	}

	if (i % 2 == 1)
	{
		innerSolver(i + 1);
		return;
	}
	else
	{
		innerSolver(i / 2);
		return;
	}
}



int main()
{
	CSCS* cSCS = new CSCS();
	cSCS->userInput();
	std::cout << cSCS->solve();
	delete cSCS;
}
