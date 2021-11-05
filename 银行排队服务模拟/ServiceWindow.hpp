//
//ServiceWindow.hpp
//QueueSystem
//
/*
窗口本身涉及的操作还算是比较简单，比如设置窗口状态是否繁忙，
获取当前服务顾客的到达时间来方便后续计算等等，因此我们直接
将其设计成类内的 inline 函数：
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

