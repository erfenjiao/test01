//
//ServiceWindow.hpp
//QueueSystem
//
/*
���ڱ����漰�Ĳ��������ǱȽϼ򵥣��������ô���״̬�Ƿ�æ��
��ȡ��ǰ����˿͵ĵ���ʱ���������������ȵȣ��������ֱ��
������Ƴ����ڵ� inline ������
*/

#ifndef ServiceWindow_hpp
#define ServiceWindow_hpp

#include"Node.hpp"

enum WindowStatus
{
	SERVICE,
	IDLE,
};

class ServiceWindow
{
public:
	inline ServiceWindow()
	{
		window_status = IDLE;
	};
	inline bool isIDLE() const
	{
		return true;
	}
	else
	{
	return false;
	}

};

#endif // ServiceWindow_hpp

