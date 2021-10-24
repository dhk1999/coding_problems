#include <iostream>
#include <string>
#include <vector>

class CCmdSolver
{
private:
	int32_t iCaseNum;
	std::vector<std::string> dirVec;

public:
	CCmdSolver();
	~CCmdSolver();

	void userInput();
	void compareStrFn();
	std::string compareStrInnerFn(std::string str1, std::string str2);

};

CCmdSolver::CCmdSolver() {
	// constructor
};

CCmdSolver::~CCmdSolver() {
	// destructor
};

void CCmdSolver::userInput() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string inputStr = "";
	std::cin >> iCaseNum;

	for (int i = 0; i < iCaseNum; i++)
	{
		std::cin >> inputStr;
		dirVec.push_back(inputStr);
	}
};

void CCmdSolver::compareStrFn() {

	std::string tempStr = dirVec.at(0);

	for (int i = 1; i < iCaseNum; i++)
	{
		tempStr = compareStrInnerFn(tempStr, dirVec.at(i));
	}

	std::cout << tempStr;
};

std::string CCmdSolver::compareStrInnerFn(std::string str1, std::string str2) {

	std::string retVal;

	for (int i = 0; i < str1.length(); i++)
	{
		if (str1.at(i) == str2.at(i))
		{
			retVal.push_back(str1.at(i));
		}
		else
			retVal.push_back('?');
	}

	return retVal;
}



int main()
{
	CCmdSolver* cCmdSolver = new CCmdSolver();
	cCmdSolver->userInput();
	cCmdSolver->compareStrFn();
	delete cCmdSolver;
}
