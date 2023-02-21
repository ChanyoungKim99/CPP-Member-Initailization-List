#include <iostream>

class Quest
{
private:
	const int mID;						
	int mExp;

public:
	Quest(int id = 1, int exp = 1) : mID{ id }, mExp{ exp }
	{
		// mID = id;
		// mExp = exp;
		// ���� ������ �ʿ��������.
	}

	void Print()
	{
		std::cout << "Quest ID = " << mID << std::endl <<
					 "Exp = " << mExp << std::endl;
	}
};

int main()
{
	Quest q1;

	q1.Print();
}