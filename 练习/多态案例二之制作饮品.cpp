#include<iostream>

using namespace std;

class Base{
	public:
		virtual void Boil() = 0;
		
		virtual void Brew() = 0;
		
		virtual void PourInCup() = 0;
		
		virtual void PutSomething() = 0;
		
		void MakeDrink()
		{
			Boil();
			Brew();
			PourInCup();
			PutSomething();
		}
};

class Office:public Base{
	public:
		virtual void Boil()
		{
			cout << "����" << endl;
		}
		virtual void Brew()
		{
			cout << "����" << endl;
		}
		virtual void PourInCup()
		{
			cout << "���뱭��" << endl; 
		}
		virtual void PutSomething()
		{
			cout << "�Ӻ��" << endl; 
		}
};

class Tea:public Base{
	public:
		virtual void Boil()
		{
			cout << "���Ҷ" << endl;
		}
		virtual void Brew()
		{
			cout << "����" << endl;
		}
		virtual void PourInCup()
		{
			cout << "���뱭��" << endl; 
		}
		virtual void PutSomething()
		{
			cout << "�Ӳ�Ҷ" << endl; 
		}
};

void doWork(Base * abs)
{
	abs->MakeDrink();
}

void test01()
{
	doWork(new Office);
	
}

int main()
{
	test01();
}
