#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class CDistributed_Processing
{
private:
	const int32_t modArr[10][4] = {
	{ 10, 10, 10, 10 }, { 1, 1, 1, 1 },
	{ 2, 4, 8, 6 }, { 3, 9, 7, 1 },
	{ 4, 6, 4, 6 }, { 5, 5, 5, 5 },
	{ 6, 6, 6, 6 }, { 7, 9, 3, 1 },
	{ 8, 4, 2, 6 }, { 9, 1, 9, 1 }};
	int32_t testCase;
	std::vector<int32_t> resultVec;

	void solve(int32_t a, int32_t b);
	void print();

public:
	CDistributed_Processing();
	~CDistributed_Processing();
	void Distributed_Processing();
};

CDistributed_Processing::CDistributed_Processing() {
	// constructor
};

CDistributed_Processing::~CDistributed_Processing() {
	// destructor
};

void CDistributed_Processing::Distributed_Processing() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int32_t base;
	int32_t exponent;
	int32_t period;

	std::cin >> testCase;
	std::cin.ignore();

	std::string inputStr = " ";

	for (int32_t i = 0; i < testCase; i++)
	{
		std::getline(std::cin, inputStr);
		std::stringstream ss(inputStr);

		ss >> base;
		ss >> exponent;

		period = base % 10;

		solve(period, exponent);
	}
	print();
};

void  CDistributed_Processing::solve(int32_t period, int32_t exponent) {
	int exponentMod = (exponent - 1) % 4;
	resultVec.push_back(modArr[period][exponentMod]);
};

void CDistributed_Processing::print() {
	for (int32_t i = 0; i < testCase; i++)
	{
		std::cout << resultVec.at(i) << "\n";
	}
};


int main()
{
	CDistributed_Processing* cDistributed_Processing = new CDistributed_Processing();
	cDistributed_Processing->Distributed_Processing();
	delete cDistributed_Processing;
}
