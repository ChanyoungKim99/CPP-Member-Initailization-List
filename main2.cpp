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

// 출력 시, 쓰레기값이 나온다.
// 즉 id와 exp는 전혀 초기화 되지 않았다는 소리다.

// id = id; 는 매개변수 = 매개변수를 했을뿐이다.


// 멤버변수 id 와 매개변수 id 의 구분

// 멤버변수 id
// this->id = id;

// 매개변수 id
// id = id;



// 멤버 초기화 리스트를 사용하면
// Quest(int id = 1, int exp = 1) : id { id }, exp { exp } 같은 형태가 가능해진다



