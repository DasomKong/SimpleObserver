#include "TestObserver.h"



CTestObserver::CTestObserver()
	:iTestValue(0)
{
}


CTestObserver::~CTestObserver()
{
}

void CTestObserver::OnNotify(void * pObserv)
{
	// int ������ �����ؼ� �����غ���
	iTestValue = *((int*)pObserv);

	std::cout << iTestValue << '\n';
}