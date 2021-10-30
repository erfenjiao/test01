#include<iostream>
#include<string>
using namespace std;

class Cube
{
	public:
		void setL(int L)
		{
			m_L = L;
		}
		
		int getL()
		{
			return m_L;
		}
		
		void setW(int W)
		{
			m_W = W;
		}
		
		int getW()
		{
			return m_W;
		}
		
		void setH(int H)
		{
			m_H = H;
		}
		
		int getH()
		{
			return m_H;
		}
		
		int calculateS()
		{
			return 2*m_L*m_W + 2*m_L*m_H + 2*m_W*m_H; 
		}
		
		int calculateV()
		{
			return m_L*m_H*m_W;
		}
		
		bool isSame(Cube &c)
		{
			if(m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
			{
				return true;
			}
			return false;
		}
		
		
	private:
		int m_L;
		int m_W;
		int m_H;
 } ;

//
//bool isSame(Cube &c1 , Cube &c2)
//{
//	if(c1.getL() == c2.getL() && c1.getH()==c2.getH() && c1.getW()==c2.getW())
//	{
//		return true;
//	}
//	return false ;
//}
 
int main()
{
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	
	cout << "c1 's area = " << c1.calculateS() <<  endl;
	cout << "c1 's volume = " << c1.calculateV() << endl;
	
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(11);
	
	int ret = c1.isSame(c2);
	
	if(ret)
	{
		cout << "c1 && c2 is same" << endl;
	}
	else
	{
		cout << "c1 && c2 is not same" << endl;
	}
	
//	if(isSame(c1,c2))
//	{
//		cout << "c1 && c2 is same" << endl;
//	}
//	else
//	{
//		cout << "c1 && c2 is not same" << endl;
//	}
}
