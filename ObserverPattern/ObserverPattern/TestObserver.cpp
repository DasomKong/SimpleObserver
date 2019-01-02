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
	// int 값으로 변형해서 저장해볼것
	iTestValue = *((int*)pObserv);

	std::cout << iTestValue << '\n';
}