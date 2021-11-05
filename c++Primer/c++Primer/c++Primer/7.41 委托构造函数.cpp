#include<iostream>
using namespace std;

class Sales_data
{
public:
	Sales_data(string s , unsigned cnt , double price):
		bookNo(s) , units_sold(cnt) , revenue(cnt * price){ }
	Sales_data() : Sales_data("" , 0 , 0){ }
	Sales_data(string s) :Sales_data(s, 0, 0){ }
	Sales_data(istream &is) : Sales_data()
	{
		read(is, *this);
	}
};