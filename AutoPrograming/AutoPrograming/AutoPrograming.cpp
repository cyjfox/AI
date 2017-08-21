// AutoPrograming.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"

//using namespace std;
class Data
{
private:
	unsigned long m_length;
	void * m_dataPointer;

public:
	Data(unsigned long length, void * dataPointer)
	{
		m_length = length;
		m_dataPointer = dataPointer;
	}

	unsigned long length()
	{
		return m_length;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	system("pause");
	return 0;
}

bool isPattern0(Data &data)
{
	return (data.length() > 0);
}

//所有的messurment函数都返回一个有符号long值。
long pattern0Messurment(void *pData)
{
	
	return (*pData ? 1 : 0);
}

