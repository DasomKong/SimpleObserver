#include "TestSubject.h"



CTestSubject::CTestSubject()
{
}


CTestSubject::~CTestSubject()
{
}

void CTestSubject::Notify(void * pObserv)
{
	for (size_t i = 0; i < iObserverCount; ++i)
		Observers[i]->OnNotify(pObserv);
}