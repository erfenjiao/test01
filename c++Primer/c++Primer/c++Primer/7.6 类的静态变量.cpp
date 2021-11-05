#include<iostream>
#include<string>
using namespace std;

class Account
{
public: 
	void calculate() { amount += amount * interstRate; }
	static double rate() { return interstRate; }
	static void rate(double);

private:
	string owner;
	double amount;
	static double interstRate();
	static double initRate();
};
