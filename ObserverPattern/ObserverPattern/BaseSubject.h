#pragma once

#define MAX_OBSERVER 10

#include "header.h"
#include "BaseObserver.h"

class CBaseSubject
{
public:
	CBaseSubject();
	virtual ~CBaseSubject();

public:
	void AddObserver(CBaseObserver* pObserver);
	void RemoveObserver(CBaseObserver* pObserver);

protected:
	virtual void Notify(void* pObserv) = 0;

protected:
	CBaseObserver* Observers[MAX_OBSERVER] = {nullptr,};
	size_t iObserverCount;

private:
	void ClearObserver(void);

};