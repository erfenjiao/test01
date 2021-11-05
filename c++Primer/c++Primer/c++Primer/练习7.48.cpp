/*
	如果函数只接受一个实参，则它实际上定义了转换为此类型的的
	隐式转换规则，这种构造函数称为转换构造函数
*/
#include<iostream>
#include<string>
using namespace std;

class Sales_data
{
public:
	Sales_data() = default;
	string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
	inline double avg_price() const;
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	string null_isbn("9-999-99999-9");
	Sales_data item1(null_isbn);
	//Sales_data item2("9-999-99999-9");  错误

}