#include <iostream>

class ClassA
{
public:
	ClassA()
	{
		std::cout << "ClassA()" << std::endl;
	}
};

class ClassB
{
public:
	ClassB()
	{
		std::cout << "ClassB()" << std::endl;
	}
};

class ClassC
{
	ClassA mA;
	ClassB mB;
public:
	ClassC() : mA{}, mB{}    // 여기서 mB{}, mA{} 로 하더라도 
	{						 // 멤버 선언 순서대로 생성됨
		std::cout << "ClassC()" << std::endl;
	}
};


int main()
{
	ClassC mC;
}