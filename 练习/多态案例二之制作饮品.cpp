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
			cout << "Öóºì²è" << endl;
		}
		virtual void Brew()
		{
			cout << "³åÅÝ" << endl;
		}
		virtual void PourInCup()
		{
			cout << "µ¹Èë±­ÖÐ" << endl; 
		}
		virtual void PutSomething()
		{
			cout << "¼Óºì²è" << endl; 
		}
};

class Tea:public Base{
	public:
		virtual void Boil()
		{
			cout << "Öó²èÒ¶" << endl;
		}
		virtual void Brew()
		{
			cout << "³åÅÝ" << endl;
		}
		virtual void PourInCup()
		{
			cout << "µ¹Èë±­ÖÐ" << endl; 
		}
		virtual void PutSomething()
		{
			cout << "¼Ó²èÒ¶" << endl; 
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
