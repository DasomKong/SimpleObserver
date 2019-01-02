#include "BaseSubject.h"

CBaseSubject::CBaseSubject()
	:iObserverCount(0)
{
}


CBaseSubject::~CBaseSubject()
{
	ClearObserver();
}

void CBaseSubject::AddObserver(CBaseObserver* pObserver)
{
	if (iObserverCount < MAX_OBSERVER)
	{
		Observers[iObserverCount] = pObserver;
		++iObserverCount;
	}
}

void CBaseSubject::RemoveObserver(CBaseObserver* pObserver)
{
	if (0 == iObserverCount)
		return;

	for (size_t i = 0; i < iObserverCount; ++i)
	{
		if (Observers[i] == pObserver)
		{
			ArrayControl::DeleteMidArray<CBaseObserver*>(Observers, i, iObserverCount);
		}
	}
	--iObserverCount;
}

void CBaseSubject::ClearObserver(void)
{
	for (size_t i = 0; i < iObserverCount; ++i)
	{
		if (nullptr != Observers[i])
		{
			delete Observers[i];
			Observers[i] = nullptr;
		}
	}
	iObserverCount = 0;
}