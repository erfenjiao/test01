#include<iostream>
using namespace std;

class Animal{
	public:
		void speak()
		{
			cout << "animal is speaking." << endl;
		}
};

void doSpeak(Animal &animal)
{
	animal.speak();
}

class Cat : public Animal{
	public:
		void speak()
		{
			cout << "cat is speaking." << endl; 
		}
};

void test01()
{
	Cat cat;
	doSpeak(cat);
}

int main()
{
	test01();
}

