// AutoPrograming.cpp : �������̨Ӧ�ó������ڵ㡣
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

//���е�messurment����������һ���з���longֵ��
long pattern0Messurment(void *pData)
{
	
	return (*pData ? 1 : 0);
}

