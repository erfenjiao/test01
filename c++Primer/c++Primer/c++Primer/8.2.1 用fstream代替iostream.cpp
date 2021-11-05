#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Sales_data
{
	string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main(int argc , char * argv[])
{
	ifstream input(argv[1]);
	ofstream output(argv[2]);
	Sales_data total;
	if (read(input, total))
	{

	}
}