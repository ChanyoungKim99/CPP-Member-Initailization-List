#include <iostream>

class Quest
{
private:
	int id;
	int exp;

public:
	Quest(int id = 1, int exp = 1)
	{
		id = id;
		exp = exp;
	}

	void Print()
	{
		std::cout << "Quest ID = " << id << std::endl <<
			"Exp = " << exp << std::endl;
	}
};

int main()
{
	Quest q1(1, 100);

	q1.Print();
}

// ��� ��, �����Ⱚ�� ���´�.
// �� id�� exp�� ���� �ʱ�ȭ ���� �ʾҴٴ� �Ҹ���.

// id = id; �� �Ű����� = �Ű������� �������̴�.


// ������� id �� �Ű����� id �� ����

// ������� id
// this->id = id;

// �Ű����� id
// id = id;



// ��� �ʱ�ȭ ����Ʈ�� ����ϸ�
// Quest(int id = 1, int exp = 1) : id { id }, exp { exp } ���� ���°� ����������



