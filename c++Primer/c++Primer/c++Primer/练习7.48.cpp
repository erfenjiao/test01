/*
	�������ֻ����һ��ʵ�Σ�����ʵ���϶�����ת��Ϊ�����͵ĵ�
	��ʽת���������ֹ��캯����Ϊת�����캯��
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
	//Sales_data item2("9-999-99999-9");  ����

}